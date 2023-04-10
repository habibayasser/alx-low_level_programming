#include "stdio.h"

/**
 * main - print number
 * argc: elemant counter
 * argv: elemant value
 *
 * Return: zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
