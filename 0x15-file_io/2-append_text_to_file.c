#include "main.h"

/**
 * append_text_to_file - that appends text at the end of a file.
 * @filename: pointer to the name of the file
 * @text_content: pointer to the string will write in the file
 *
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 *  Return 1 if the file exists and -1 if the file does not exist
 *  or if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, length);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
