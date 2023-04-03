#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: pointer to sting or null
 * @c: variable of chracter
 *
 * Return: a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	int x;
	
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
