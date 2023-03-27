#include "main.h"
/**
 * swap - swap two variable
 * @a : pointer to int
 * @b : pointer to int
 *  return : void
 *
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}


