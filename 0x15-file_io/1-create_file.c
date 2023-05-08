#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: pointer to the string that will write in the file
 *
 * Return: 1 on success, -1 on failure (file can not be created
 *  file can not be written, write “fails”, etc…)
 *  The created file must have those permissions: rw-------.
 *  If the file already exists, do not change the permissions
 *  if the file already exists, truncate it
 *  if filename is NULL return -1
 *  if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght]; lenght++);
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, lenght);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}


