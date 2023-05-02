#include "lists.h"

/**
 * sum_listint - the sum of all the data (n)
 *  of a listint_t linked list.
 *  @head: pointer to the first node in the linked list
 *
 *  Return: if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum_list = 0;

	while (head)
	{
		sum_list += head->n;
		head = head->next;
	}
	return (sum_list);
}
