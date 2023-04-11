#include "main.h"
#include <stdlib>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return:  should point to a newly allocated space
 * in memory which contains the contents of s1
 * followed by the contents of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int i, length = 0;
	char *con;
	int conc_len ;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] || s2[i]; i++)
		length++;

	con = malloc(sizeof(char) * length);

	if (con == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		con[con_len++] = s1[i];

	for (i = 0; s2[]; i++)
		con[con_len++] = s2[i];

	return (con);

