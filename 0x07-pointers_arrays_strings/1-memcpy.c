#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: pointer to the memory area
 * @src: pointer to the memory area
 * @n: number of byte to be filled
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}

