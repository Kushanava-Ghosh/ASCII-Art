# ASCII-Art
A Simple console-based ASCII Art generator written in C++. This project focuses on converting the user-input images/videos into its equivalent ASCII type

## Requirements
1. Windows OS
2. MSYS2 Compiler for C/C++
3. OpenCV Library

## Installation
### Step 1 : You should be equipped with a Windows OS
This project is currently built and tested for **Windows OS** only.
### Step 2 : Install `MSYS2 Compiler` for C/C++
1. **Download the Installer**
    You can visit the official MSYS2 website and download the same
    Link : [Installer](https://github.com/msys2/msys2-installer/releases/download/2024-12-08/msys2-x86_64-20241208.exe) 
2. **Run the Installer and follow the steps of the installation wizard**
3. **Install the Required Packages**
    - In the wizard, choose your desired Installation Folder. Record this directory for later. In most cases, the recommended directory is acceptable. The same applies when you get to setting the start menu shortcuts step. When complete, ensure the Run MSYS2 now box is checked and select Finish. A MSYS2 terminal window will then automatically open.
    - In this terminal, install the MinGW-w64 toolchain by running the following command:
      ```bash
      pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
      ``` 
