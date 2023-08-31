0x14. C - Bit Manipulation

Learning Objectives

In this project, you will learn the following:

- How to manipulate bits and use bitwise operators

Requirements

General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free, and exit. Any use of functions like printf, puts, calloc, realloc, etc… is forbidden
- You are allowed to use _putchar
- Don’t forget to push your header file
- All your header files should be include guarded

Tasks

0. Binary to Unsigned Int
Write a function that converts a binary number to an unsigned int.

- Prototype: unsigned int binary_to_uint(const char *b);
- where b is pointing to a string of 0 and 1 chars
- Return: the converted number, or 0 if there is one or more chars in the string b that is not 0 or 1 or if b is NULL

1. Print Binary
Write a function that prints the binary representation of a number.

- Prototype: void print_binary(unsigned long int n);

2. Get Bit
Write a function that returns the value of a bit at a given index.

- Prototype: int get_bit(unsigned long int n, unsigned int index);
- where index is the index, starting from 0 of the bit you want to get
- Returns: the value of the bit at index index or -1 if an error occurred

3. Set Bit
Write a function that sets the value of a bit to 1 at a given index.

- Prototype: int set_bit(unsigned long int *n, unsigned int index);
- where index is the index, starting from 0 of the bit you want to set
- Returns: 1 if it worked, or -1 if an error occurred

4. Clear Bit
Write a function that sets the value of a bit to 0 at a given index.

- Prototype: int clear_bit(unsigned long int *n, unsigned int index);
- where index is the index, starting from 0 of the bit you want to set
- Returns: 1 if it worked, or -1 if an error occurred

5. Flip Bits
Write a function that returns the number of bits you would need to flip to get from one number to another.

- Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
- You are not allowed to use the % or / operators

6. Endianness (Advanced)
	Write a function that checks the endianness.

	- Prototype: int get_endianness(void);
	- Returns: 0 if big endian, 1 if little endian

7. Crackme3 (Advanced)
	Find the password for this program.

	- Save the password in the file 101-password.
	- Your file should contain the exact password, no new line, no extra space.
