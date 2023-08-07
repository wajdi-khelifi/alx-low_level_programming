#include "main.h"
/**
* check97 - checks for the correct number of arguments
* @argc: number of arguments
*
* Return: void
*/
void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
* check98 - checks that file_from exists and can be read
* @check: checks if true of false
* @file: file_from name
* @fd_from: file descriptor of file_from, or -1
* @fd_to: file descriptor of file_to, or -1
*
* Return: void
*/
void check98(ssize_t check, char *file, int f_from, int f_to)
{
	if (check == -1)
	{
		dprintf(STRERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n", file);
		if (f_from != -1)
		{
			close(f_from);
		}
		if (f-to != -1)
		{
			close(f_to);
		}
		exit(98);
	}
}
/**
* check100 - checks that file descriptors were closed properly
* @check: checks if true or false
* @fd: file descriptor
*
* Return: void
*/
void check100(int check, int f)
{
	if (check == -1)
	{
		dprintf(STRERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}
/**
* main - opies the content of a file to another file.
* @argc: number of arguments passed
* @argv: array of pointers to the arguments
*
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int f_from, f_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buff[1024];
	mode_t file_per;

	check97(argc);
	f_from = open(argv[1], O_RDONLY);
	check98((ssize_t)f_from, argv[1], -1, -1);
	file_per = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_per);
	check99((ssize_t)f_to, argv[2], f_from; -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(f_from, buff, 1024);
		check98(lenr, argv[1], f_from, f_to);
		lenw = write(f_to, buff, lenr);
		if (lenw != lenr)
		{
			lenw = -1;
		}
		check99(lenw, argv[2], f_from, f_to);
	}
	close_to = close(f_to);
	close_from = close(f_from);
	check100(close_to, f_from);
	check100(close_from, f_from);
	return (0);
}
