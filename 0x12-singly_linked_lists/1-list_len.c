#include <stdio.h>
#include "lists.h"

/**
 * list_len -  returns the number of elements in a
 * linked list_t list.
 * @h: pointer to the linked list
 *
 * Return: number of e in list
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
