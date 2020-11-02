# Introduction to unit testing with GoogleTest workshop

This is a basic project setup facilitate the introduction of workshop participants
to unit testing with **GoogleTest** and **GoogleMock** in C++.

## Preparation

The workshop is intended to be hands-on, so you are expected to code-along.
To achieve that, it is important you have prepared your development environment and
are able to compile the project.

### Ubuntu

If you are on Ubuntu or another *nix distribution, I trust you already know what you are doing.
To compile this project, you will need a not-too-old C++ compiler and CMake.

### Windows with Microsoft C++ compiler

If you are set up on Windows and have a Microsoft C++ compiler, I trust you already know what you are doing.
To compile this project, you will also need CMake.

### Windows with no compiler installed

I suggest you go for Visual Studio Code as your IDE with WSL 2.0 (Windows Subsystem for Linux):

* Visual Studio Code with WSL (strongly preferred)
  * [Instructions on how to set up](https://code.visualstudio.com/docs/cpp/config-wsl)
  * Using the WSL command line install the following packages:
    * `cmake`
    * `g++`
    * `git` (optional)
  * Extensions you should have installed:
    * `C/C++`
    * `CMake Tools`
    * `C++ Intellisense` (optional)
  * Enable `git clone` to work on WSL:
    * Create a file `/etc/wsl.conf` with the following contents:
    ```bash
    [automount]
    options = "metadata"
    ```
* CLion with Cygwin or WSL
  * [Instructions on how to set up](https://www.jetbrains.com/help/clion/quick-tutorial-on-configuring-clion-on-windows.html)

### Building the project

First, clone this repository. 
If you have set things up correctly, you should be able to *configure* and *build* the project.
To ensure you are able to do that, try running the available test cases and ensure that they
execute successfully and all tests pass.