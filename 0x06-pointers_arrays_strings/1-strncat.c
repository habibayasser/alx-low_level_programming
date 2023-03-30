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
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
		j++;
	}
	for (i = 0; src[i] && i <n; i++)
	{
		dest[i] = src[j];
	}
	
	return(dest0;
}
