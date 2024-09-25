# Code Editor and Compiler Setup

## Step 1: Install a Code Editor

For this project, I recommend using VSCodium, a free, open-source code editor similar to Visual Studio Code but without Microsoft's telemetry. However, feel free to use any other editor if you prefer.

### Installation on Windows

1. Go to the [VSCodium website](https://vscodium.com/).
2. Download the installer for Windows.
3. Run the installer and follow the on-screen instructions to complete the installation.

### Installation on Linux

1. Open your terminal and run the following commands based on your Linux distribution:

   - **For Debian/Ubuntu-based systems:**
     ```bash
     sudo apt update && sudo apt upgrade
     sudo apt install codium
     ```

   - **For Fedora:**
     ```bash
     sudo dnf install codium
     ```

   - **For Arch Linux:**
     ```bash
     sudo pacman -S codium
     ```

## Step 2: Install a C Compiler

### Installation on Windows

For Windows, I recommend using MinGW (Minimalist GNU for Windows) or TDM-GCC:

1. **MinGW Installation:**
   - Download the installer from the [MinGW official website](https://www.mingw.org/).
   - Run the installer and select `mingw32-gcc-g++` and `mingw32-base`.
   - After installation, add `C:\MinGW\bin` to your system's PATH environment variable.

2. **TDM-GCC Installation:**
   - Download TDM-GCC from the [TDM-GCC official website](https://jmeubank.github.io/tdm-gcc/download/).
   - Follow the installation instructions and add it to your PATH if necessary.

### Installation on Linux

On most Linux distributions, GCC (GNU Compiler Collection) is usually pre-installed. To ensure you have it installed, run:

   - **For Debian/Ubuntu-based systems:**
     ```bash
     sudo apt update && sudo apt upgrade
     sudo apt install build-essential
     ```

   - **For Fedora:**
     ```bash
     sudo dnf install gcc
     ```

   - **For Arch Linux:**
     ```bash
     sudo pacman -S gcc
     ```

## Step 3: Add a Customized Theme to Your Code Editor

To enhance your coding experience, I recommend using a customized theme created earlier. Follow these steps to add it to your code editor:

1. Visit the [custom theme link](https://dev.to/abdullah_alazmi_12/hey-this-is-my-personal-customization-and-maybe-you-will-like-this-1lon) and copy the theme settings provided.

2. Open your code editor (VSCodium/VS Code), and press:
    ```bash
    Ctrl + Shift + P
    ```

3. Type `settings` and select:
    ```bash
    Preferences: Open User Settings (JSON)
    ```

## Step 4: Install Necessary Extensions for C Programming

To optimize your coding environment for C programming, it's essential to install the following extensions:

1. **C/C++ Extensions Pack:**
    - This extension pack includes all necessary tools like IntelliSense, debugging, and code browsing for C/C++.
    - Search for 'C/C++' by Microsoft in the extension marketplace and install it.

2. **Code Runner:**
    - Allows you to run your code snippets easily.
    - Search for 'Code Runner' in the extension marketplace and install it.

**By following these steps, you will have your code editor and compiler ready, complete with a custom theme and necessary extensions for an enhanced coding experience.**
