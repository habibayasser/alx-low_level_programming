#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: pointer to the first node in the linked list
 *
 * Return: if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int pop_ele;

	if (*head == NULL)
		return (0);

	temp = *head;
	pop_ele = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (pop_ele);
}
