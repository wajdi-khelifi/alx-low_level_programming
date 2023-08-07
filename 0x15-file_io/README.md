Project README: File I/O in C

Table of Contents

- Project Description
- Learning Objectives
- Requirements
- Tasks

Project Description

Welcome to the 0x15 C File I/O project! In this project, you will learn about file input/output operations and system calls in C. You will be tasked to implement various functions related to reading, writing, and manipulating files using file descriptors and syscalls.

Learning Objectives

At the end of this project, you should be able to:

- Look for the right source of information online
- Create, open, close, read, and write files
- Understand and use file descriptors
- Identify the 3 standard file descriptors, their purpose, and their POSIX names
- Use I/O system calls like open, close, read, and write
- Utilize the flags O_RDONLY, O_WRONLY, and O_RDWR
- Set file permissions when creating a file with the open system call
- Differentiate between a function and a system call

Requirements

- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A README.md file at the root of the project folder is mandatory
- Your code should follow the Betty style. Use betty-style.pl and betty-doc.pl for checking
- Do not use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, and exit. Avoid functions like printf, puts, calloc, realloc, etc.
- Allowed syscalls: read, write, open, close
- You are allowed to use _putchar but do not push your own _putchar.c file
- All header files should be include guarded

Tasks

	Task 0: Tread lightly, she is near
	- Write a function read_textfile that reads a text file and prints its contents to the POSIX standard output.

	Prototype:
	- ssize_t read_textfile(const char *filename, size_t letters);

	Task 1: Under the snow
	- Create a function create_file that creates a new file.

	Prototype:
	- int create_file(const char *filename, char *text_content);

	Task 2: Speak gently, she can hear
	- Write a function append_text_to_file that appends text at the end of a file.

	Prototype:
	- int append_text_to_file(const char *filename, char *text_content);

	Task 3: cp
	- Write a program cp that copies the content of one file to another.

	- Usage: cp file_from file_to

	Task 4: elf
	- Write a program that displays the information contained in the ELF header at the start of an ELF file.

	- Usage: elf_header elf_filename
