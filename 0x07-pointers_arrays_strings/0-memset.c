#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte.
 * @s: pointer to string
 * @b: variable of byte
 * @n: num of byte
 *
 * return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return(s);
}