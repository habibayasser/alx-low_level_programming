#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 *@str: pointer to memory allocated in array
 *
 * Return: null ifthe pointer pointed to null ,
 *  a pointer to a new string which is a duplicate of the string str
 */

char *_strdup(char *str)
{
	int i;
	char *d;
	int length = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		length++;

	d = malloc(sizeof(char) * (length + 1));

	if (d == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		d[i] = str[i];

	d[i] = '\0';

	return (d);
}
