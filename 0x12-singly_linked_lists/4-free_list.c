#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list -  frees a list_t list.
 * @head: pointer to the first node in the linked list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
