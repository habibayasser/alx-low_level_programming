#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: pointer to string
 * @src: pointer to string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	int len = 0 ;
	while (dest[i] != '\0')
		i++;
	while (src[len] != '\0')
	{
		dest[i] = src[len];
		i++;
		len++;
	}
	dest[i] = '\0';

	return (dest);
}
