#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of allocated byte
 *
 * Return:  pointer shall point to a newly allocated
 * space in memory, which contains s1, followed by the
 * first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc_str;
	unsigned int x = 0, y = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		conc_str = malloc(sizeof(char) * (len1 + n + 1));
	else
		conc_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!conc_str)
		return (NULL);

	while (x < len1)
	{
		conc_str[x] = s1[x];
		x++;
	}

	while (n < len2 && x < (len1 + n))
		conc_str[x++] = s2[y++];

	while (n >= len2 && x < (len1 + len2))
		conc+str[x++] = s2[y++];

	conc_str[x] = '\0';

	return (conc_str);
}
