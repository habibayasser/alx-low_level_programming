#include "main.h"

/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: the datatype of the array initialized with
 *
 * Return: zero if it null , pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (null);

	array = malloc(sizeof(char) * size);

	if (array == 0)
		return(null);
	
	for (i = 0; i < size; i++)
		array[i] = c;
	
	return (array);
}
