#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the first node in the linked list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
