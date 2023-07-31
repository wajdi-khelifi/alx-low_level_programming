Project README
	0x13. C - More singly linked lists

	Welcome to the 0x13. C - More singly linked lists project! This project covers various tasks related to singly linked lists in the C programming language. By completing these tasks, you will gain a deeper understanding of linked lists, algorithms, and data structures.

	Learning Objectives

After completing this project, you will be able to explain to anyone, without the help of Google:

	1. How to use linked lists
	2. Starting to look for the right source of information without too much help

	General Requirements
	
	- Allowed editors: vi, vim, emacs
	- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
	- All your files should end with a new line
	- A README.md file, at the root of the folder of the project is mandatory
	- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
	- You are not allowed to use global variables
	- No more than 5 functions per file
	- The only C standard library functions allowed are malloc, free, and exit. Any use of functions like printf, puts, calloc, realloc, etc… is forbidden
	- You are allowed to use _putchar
	- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
	- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
	- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
	- Don’t forget to push your header file
	- All your header files should be include guarded

	Tasks

0. Print list
	- Write a function size_t print_listint(const listint_t *h); that prints all the elements of a listint_t list.

1. List length
	- Write a function size_t listint_len(const listint_t *h); that returns the number of elements in a listint_t list.

2. Add node
	- Write a function listint_t *add_nodeint(listint_t **head, const int n); that adds a new node at the beginning of a listint_t list.

3. Add node at the end
	- Write a function listint_t *add_nodeint_end(listint_t **head, const int n); that adds a new node at the end of a listint_t list.

4. Free list
	- Write a function void free_listint(listint_t *head); that frees a listint_t list.

5. Free (Part 2)
	- Write a function void free_listint2(listint_t **head); that frees a listint_t list and sets the head to NULL.

6. Pop
	- Write a function int pop_listint(listint_t **head); that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

7. Get node at index
	- Write a function listint_t *get_nodeint_at_index(listint_t *head, unsigned int index); that returns the nth node of a listint_t linked list.

8. Sum list
	- Write a function int sum_listint(listint_t *head); that returns the sum of all the data (n) of a listint_t linked list.

9. Insert
	- Write a function listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n); that inserts a new node at a given position.

10. Delete at index
	- Write a function int delete_nodeint_at_index(listint_t **head, unsigned int index); that deletes the node at index index of a listint_t linked list.

11. Reverse list (advanced)
	- Write a function listint_t *reverse_listint(listint_t **head); that reverses a listint_t linked list.

12. Print (safe version, advanced)
	- Write a function size_t print_listint_safe(const listint_t *head); that prints a listint_t linked list. This function can print lists with a loop.

Resources

Read or watch:

	- Google
	- Youtube

Disclaimer

	- You are tasked to come up with solutions for the tasks yourself to meet the learning objectives. You will not be able
