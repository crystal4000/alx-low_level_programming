#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * print_usage_error - Prints usage error message and exits.
 *
 * @program_name: The name of the program.
 */
void print_usage_error(const char *program_name)
{
	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", program_name);
	exit(97);
}

/**
 * read_file - Reads from a file and writes to another.
 *
 * @fd_from: The file descriptor of the source file.
 * @fd_to: The file descriptor of the destination file.
 * @buffer: The buffer for reading and writing.
 *
 * Return: 0 on success, or the corresponding exit code on failure.
 */
int read_file(int fd_from, int fd_to, char *buffer)
{
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			return (99);
	}

	if (bytes_read == -1)
		return (98);

	return (0);
}

/**
 * main - Copies the content of one file to another.
 *
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 *
 * Return: 0 on success, or the corresponding exit code on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[1024];
	int read_result;

	if (argc != 3)
		print_usage_error(argv[0]);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_from);
		exit(99);
	}

	read_result = read_file(fd_from, fd_to, buffer);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (read_result);
}

