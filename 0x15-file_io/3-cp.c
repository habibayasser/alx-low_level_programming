#include "main.h"
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return(buffer);

}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int cloz;

	cloz = close(fd);

	if (cloz == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 * 97 if the number of arguments is not correct.
 * 98 if the file_from does not exist.
 * 99 if the file_to cannot be created or written to.
 * 100 if the file_from cannot be closed or read from.
 */
int main(int argc, char *argv[])
{
	int from,_f to_f, re, wr;
	char *list;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	list = create_buffer(argv[2]);
	from_f = open(argv[1], O_RDONLY);
	re = read(from_f, list, 1024);
	to_f = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from_f == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(list);
			exit(98);
		}

		wr = write(to_f, list, re);
		if (to_f == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(list);
			exit(99);
		}

		re = read(from_f, list, 1024);
		to_f = open(argv[2], O_WRONLY | O_APPEND);

	} while (re > 0);

	free(list);
	close_file(from_f);
	close_file(to_f);

	return (0);
}
