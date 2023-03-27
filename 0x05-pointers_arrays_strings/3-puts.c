#include "main.h"
/**
 * _puts - print the string followed by the new line
 * @str: pointer to string
 *
 * return: void
 */
void _puts(char *str)
{
	int i=0;
	while(str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n')
}
