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
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				x++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (x);
		}

		s++;
	}

	return (x);
}
