#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to
 *  the POSIX standard output.
 *  @filename: pointer to the name of the file
 *  @letters: variable contain the element to be read
 *
 *  Return: the actual number of letters it could read and print
 *  if the file can not be opened or read, return 0
 *  if filename is NULL return 0
 *  if write fails or does not write the
 *   expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t re, wr, op;
	char *list;

	if (filename == NULL)
		return (0);

	list = malloc(sizeof(char) * letters);
	if (list == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, list, letters);
	wr = write(STDOUT_FILENO, list, re);

	if (op == -1 || re == -1 || wr == -1 || wr != re)
	{
		free(list);
		return (0);
	}

	free(list);
	close(op);

	return (wr);
}

