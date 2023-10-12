# 0x14. Binary - Bit Manipulation

This project is a collection of C tasks designed to help you learn more about binary manipulation and bitwise operators in the C programming language. Each task has specific learning objectives and requirements to fulfill.

## Tasks

- **0. Binary to Unsigned Int** ([0-binary_to_uint.c](./0-binary_to_uint.c))
  - Write a function that converts a binary number to an unsigned int.
  - Prototype: `unsigned int binary_to_uint(const char *b);`
  - Return: the converted number, or 0 if there is one or more chars in the string `b` that is not 0 or 1 or `b` is NULL

- **1. Print Binary** ([1-print_binary.c](./1-print_binary.c))
  - Write a function that prints the binary representation of a number.
  - Prototype: `void print_binary(unsigned long int n);`
  - Format: see example
  - You are not allowed to use arrays
  - You are not allowed to use malloc
  - You are not allowed to use the % or / operators

- **2. Get Bit** ([2-get_bit.c](./2-get_bit.c))
  - Write a function that returns the value of a bit at a given index.
  - Prototype: `int get_bit(unsigned long int n, unsigned int index);`
  - Returns: the value of the bit at index `index` or -1 if an error occurred

- **3. Set Bit** ([3-set_bit.c](./3-set_bit.c))
  - Write a function that sets the value of a bit to 1 at a given index.
  - Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
  - Returns: 1 if it worked, or -1 if an error occurred

- **4. Clear Bit** ([4-clear_bit.c](./4-clear_bit.c))
  - Write a function that sets the value of a bit to 0 at a given index.
  - Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
  - Returns: 1 if it worked, or -1 if an error occurred

- **5. Flip Bits** ([5-flip_bits.c](./5-flip_bits.c))
  - Write a function that returns the number of bits you would need to flip to get from one number to another.
  - Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
  - You are not allowed to use the % or / operators

- **6. Endianness** ([100-get_endianness.c](./100-get_endianness.c))
  - Write a function that checks the endianness.
  - Prototype: `int get_endianness(void);`
  - Returns: 0 if big endian, 1 if little endian

- **7. Crackme3** ([101-password](./101-password))
  - Find the password for this program.
  - Save the password in the file 101-password
  - Your file should contain the exact password, no new line, no extra space

## Project Information

- Author: Julien Barbier
- Weight: 1
- Project Start Date: Aug 31, 2023, 5:00 AM
- Project End Date: Sep 1, 2023, 5:00 AM
- Checker Released: [Release Date]
- Auto Review Will Be Launched at the Deadline

## Learning Objectives

By the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- Look for the right source of information without too much help
- How to manipulate bits and use bitwise operators
- Copyright - Plagiarism

You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- Don’t forget to push your header file
- All your header files should be include guarded

## Author

- Wajdi khelifi
- GitHub: [wajdi-kelifi](https://github.com/wajdi-khelifi)

