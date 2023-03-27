#include "main.h"
/**
 * print_array - prints n elements of an array of integers, followed by a new line
 * @a: pointer to int
 * @n: pointer to int
 *
 * return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (n--; i >= 0; n--; i++)
	{
		prinrf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
