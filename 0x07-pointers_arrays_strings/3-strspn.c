#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to  initial segment of string
 * @accept: pointer to substring
 *
 * Return:  the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int length;

	while (*s)
	{
		for (length = 0; accept[length]; length++)
		{
			if (*s == accept[length])
			{
				x++;
				break;
			}
			else if (accept[length] == '\0')
				return (x);
		}
	}

	return ('\0');
}
