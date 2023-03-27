#include "main.h"
/**
 * print_rev - print the string in reverse followed by new line
 * @s: pointer to string
 *
 * return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int lenght = 0;
	
	while (s[lenght])
	{
		lenght++;
	}
	for (i = lenght - 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}
