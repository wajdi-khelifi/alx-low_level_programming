#include "main.h"
#define BUF_SIZE 1024
/**
 * error - function to handle error messages and exit
 * @msg: the error message
 * @exit_code: the exit code
 */
void error(char *msg, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(exit_code);
}
/**
 * open_file - function to open a file with specified flags
 * @file_path: the path to the file
 * @flags: the flags to open the file with
 * Return: the file descriptor of the opened file
 */
int open_file(const char *file_path, int flags)
{
	int fd = open(file_path, flags);

	if (fd == -1)
	{
		error(strerror(srrno), 98);
	}
	return (fd);
}
/**
 * copy_file_content - function to copy content from one fd to another
 * @fd_from: the file descriptor to read from
 * @fd_to: the file descriptor to write to
 */
void copy_file_content(int fd_from, int fd_to)
{
	ssize_t r_read, r_write;
	char buffer[BUF_SIZE];

	while ((r_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		r_write = write(fd_to, buffer, r_read);
		if (r_write == -1 || r_write != r_read)
		{
			close(fd_from);
			close(fd_to);
			error(strerror(errno), 99);
		}
	}
	if (r_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error(strerror(errno), 98);
	}
}
/**
 * main - program entry point
 * @argc: the number of command-line arguments
 * @argv: an array of pointers to the command-line arguments
 * Return: 0 on success, otherwise 97, 98, 99, or 100
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
		error("Usage: cp file_from file_to", 97);

	fd_from = open_file(argv[1], O_RDONLY);
	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	copy_file_content(fd_from, fd_to);

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		error(strerror(errno), 100);
	}
	return (0);
}
/**
 * main - program entry point
 * @argc: the number of command-line arguments
 * @argv: an array of pointers to the command-line arguments
 * Return: 0 on success, otherwise 97, 98, 99, or 100
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		error("Usage: cp file_from file_to", 97);
	}
	fd_from = open_file(argv[1], O_RDONLY);
	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	copy_file_content(fd_from, fd_to);
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		error(strerror(errno), 100);
	}
	return (0);
}
