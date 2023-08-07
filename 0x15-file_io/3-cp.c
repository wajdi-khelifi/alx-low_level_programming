#include "main.h"
#define BUF_SIZE 1024
/**
 * error - function to handle error message and exit.
 * @msg: the error message.
 * @exit_code: the exit code.
 */
void error(char *msg, int exit_code)
{
	dprintf(STRERR_FILENO, "%s\n", msg);
	exit(exit_code);
}
/**
 * main - program entry point.
 * @argc: the number of command-line arguments.
 * @argv: an array of pointers to the command-line arguments.
 * Return: 0 on success, otherwise 97, 98, 99, or 100.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r_read, r_write;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		error("Usage: cp file_from file_to", 97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		error("Error: Can't read from file", 98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error("Error: Can't write to file", 99);
	}
	while ((r_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		r_write = write(fd_to, buffer, r_read);
		if (r_write == -1 || r_write != r_read)
		{
			close(fd_from);
			close(fd_to);
			error("Error: Can't write to file", 99);
		}
	}
	if (r_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error("Error: Can't read from file", 98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		error("Error: Can't close file descriptor", 100);
	}
	return (0);
}
