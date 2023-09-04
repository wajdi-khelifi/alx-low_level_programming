Project Title: 0x15. C - File I/O

Table of Contents

- Description
- Learning Objectives
- Requirements
- Usage
- Tasks
- Files
- Author

- Description

This project is part of the ALX School's low-level programming curriculum and focuses on file input and output (I/O) operations in the C programming language. It covers concepts such as file descriptors, system calls, and handling file permissions.

- Learning Objectives

Upon completing this project, you will gain knowledge in the following areas:

How to create, open, close, read, and write files
	Understanding of file descriptors and their purpose
Knowledge of the standard file descriptors (STDIN_FILENO, STDOUT_FILENO, STDERR_FILENO)
	Usage of I/O system calls like open, close, read, and write
	Understanding of file permission settings during file creation
	Differentiating between functions and system calls

	- Requirements

	Allowed editors: vi, vim, emacs
	Code compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89
	All files should end with a new line
	Your project folder must contain a README.md file
	Code should follow the Betty style guide and be checked using betty-style.pl and betty-doc.pl
	No global variables allowed
	No more than 5 functions per file
	Only the C standard library functions malloc, free, and exit are allowed; other functions like printf, puts, calloc, and realloc are forbidden
	Allowed syscalls: read, write, open, close
	You are allowed to use _putchar
	Header file main.h should contain the prototypes of all functions and _putchar
	Use include guards for all header files

	- Usage

	Clone this repository to your local machine.
	Navigate to the project directory.
	Compile the code using the provided compilation instructions for each task.
	Run the compiled executable to test the functions.

	- Tasks

	This project consists of the following tasks:

	Tread lightly, she is near: Write a function to read and print the contents of a text file.
	Under the snow: Create a function to create a file with specified text content.
	Speak gently, she can hear: Write a function to append text to an existing file.
	cp: Implement a program to copy the content of one file to another.
	elf: Develop a program to display information from the ELF header of an ELF file (advanced task).

	- Files

	0-read_textfile.c: Contains the implementation of the first task.
	1-create_file.c: Contains the implementation of the second task.
	2-append_text_to_file.c: Contains the implementation of the third task.
	3-cp.c: Contains the implementation of the fourth task.
	100-elf_header.c: Contains the implementation of the advanced fifth task.
	main.h: Header file with function prototypes and _putchar declaration.

	- Author

	Wajdi khelifi
