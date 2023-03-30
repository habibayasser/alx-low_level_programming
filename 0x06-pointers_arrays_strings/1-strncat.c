#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: pointer to string
 * @src: pointer to string
 * @n: varible for count the bytes of appende src to dest
 *
 * return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
