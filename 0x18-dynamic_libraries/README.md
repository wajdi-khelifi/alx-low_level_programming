# 0x18. C - Dynamic Libraries

This project focuses on dynamic libraries in the C programming language. Each task has specific learning objectives and requirements to fulfill.

## Table of Contents

- Project Information
- Learning Objectives
- Requirements
- Tasks

## Project Information

- Author: Julien Barbier
- Weight: 1
- Project Start Date: Oct 16, 2023, 5:00 AM
- Project End Date: Oct 17, 2023, 5:00 AM
- Checker Released: Oct 16, 2023, 11:00 AM
- Auto Review Will Be Launched at the Deadline

## Learning Objectives

By the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- What is a dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable $LD_LIBRARY_PATH and how to use it
- What are the differences between static and shared libraries
- Basic usage of `nm`, `ldd`, and `ldconfig

## Requirements

### C

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc., is forbidden
- You are allowed to use `_putchar`
- You don't have to push `_putchar.c`, we will use our file. If you do, it won't be taken into account
- Prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don't forget to push your header file

### Bash

- Allowed editors: vi, vim, emacs
- All your scripts will be tested on Ubuntu 20.04 LTS
- All your files should end with a new line
- The first line of all your files should be exactly `#!/bin/bash`
- A README.md file, at the root of the folder of the project, describing what each script is doing
- All your files must be executable

## Tasks

### Task 0: A library is not a luxury but one of the necessities of life

Create the dynamic library `libdynamic.so` containing the specified functions or create empty functions with the right prototype.

### Task 1: Without libraries, what have we? We have no past and no future

Create a script `1-create_dynamic_lib.sh` that creates a dynamic library `liball.so` from all the `.c` files in the current directory.

### Task 2: Let's call C functions from Python

Create a dynamic library `100-operations.so` that contains C functions which can be called from Python.

### Task 3: Code injection: Win the Giga Millions!

Create a shell script `101-make_me_win.sh` that can be used to make you win the Giga Millions lottery by running two commands on the server where the lottery program runs. The script should be designed to be run by a user with limited permissions.

## Author

- [GitHub:wajdi-khelifi](https://github.com/wajdi-khelifi)
