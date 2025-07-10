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
2. **Run the Installer**
3. **Follow the steps mentioned in the [VS Code C/C++ Manual](https://code.visualstudio.com/docs/languages/cpp#_example-install-mingwx64-on-windows) from Step 2 to 9**

### Step 3 : Install `OpenCV Library for C/C++`
Initial Installation of **MSYS2** doesn't provide you with **OpenCV** Library.

Open **MSYS2 UCRT64 Shell** and Run the following commands:

```bash
pacman -Syu
```

```bash
pacman -S mingw-w64-ucrt-x86_64-opencv
```

### Now, you are good to go running this project

### ASCII Image
1. Download the file **imgascii.cpp** and run the following command to compile **(Make sure to check the path of msys64 folder)**:
   ```bash
   g++ imgascii.cpp -I"C:/msys64/ucrt64/include/opencv4" -L"C:/msys64/ucrt64/lib" -lopencv_videoio -lopencv_imgcodecs -lopencv_highgui -lopencv_video -lopencv_imgproc -lopencv_core -o imgascii.exe
   ```
2. Run the executable
   ```bash
   ./imgascii.exe
   ```
#### Sample Image Transformation
| Input |   →   | Output  |
|--------|-------|--------|
| <img width="300" alt="input" src="https://github.com/user-attachments/assets/d1d1a325-c8aa-4888-9700-b93ed56a9721" /> |   | <img width="600" alt="output" src="https://github.com/user-attachments/assets/a1b6776f-65f0-43ff-bce4-e7f1c639a4f6" /> |

### ASCII Video
1. Download the file **vidascii.cpp** and run the following command to compile **(Make sure to check the path of msys64 folder)**:
   ```bash
   g++ vidascii.cpp -I"C:/msys64/ucrt64/include/opencv4" -L"C:/msys64/ucrt64/lib" -lopencv_videoio -lopencv_imgcodecs -lopencv_highgui -lopencv_video -lopencv_imgproc -lopencv_core -o vidascii.exe 
   ```
2. Run the executable
   ```bash
   ./vidascii.exe
   ```
   
#### Sample Video Transformation
| Input |   →   | Output  |
|--------|-------|--------|
| ![Input](https://github.com/user-attachments/assets/5d61b276-458e-4773-bfb8-4f9f5a762998) |  | ![Output](https://github.com/user-attachments/assets/69b493aa-bf00-483e-b249-104b22624f07) |

### Bored of compiling the code? Download the executables and try it out !!!
