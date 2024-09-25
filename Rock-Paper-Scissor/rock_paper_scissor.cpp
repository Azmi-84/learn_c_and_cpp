#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#include<algorithm>

void to_lower_case(std::string &str) {
    std::transform(str.begin(), str.end(), str.begin(), ::tolower);
}

int rock_paper_scissor_game(const std::string &human, const std::string &computer) {
    if (human == computer) {
        return -1;
    }
    if ((human == "rock" && computer == "scissor") || (human == "scissor" && computer == "paper") || (human == "paper" && computer == "rock")) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    std::srand(static_cast < unsigned int > (std::time(nullptr)));
    std::string human, computer;
    char play_again;

    do {
        std::cout << "Enter your choice (rock, scissor or paper): ";
        std::getline(std::cin, human);
        to_lower_case(human);
    }
}