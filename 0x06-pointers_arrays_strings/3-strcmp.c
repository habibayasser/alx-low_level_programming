#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: pointer to string
 * @s2: pointer to string
 *
 * return: If str1 < str2, the negative difference of
 * the first unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2), (*s1 == *s2))
	{
		*s1++;
		*s2++;
	}
	return (*S1 - *s2);
}
