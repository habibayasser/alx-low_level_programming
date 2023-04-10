#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argc: elemant counter
 * @argv: argument value
 *
 * Return: zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
