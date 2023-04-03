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

        for (x = 0; s[x] >= '\0'; x++)
        {
                if (s[x] == c)
                
                        return (s + x);
        }

        return ('\0');
}
