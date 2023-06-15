#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_List, *last;

	new_List = malloc(sizeof(dlistint_t));
	if (new_List == NULL)
		return (NULL);

	new_List->n = n;
	new_List->next = NULL;

	if (*head == NULL)
	{
		new_List->prev = NULL;
		*head = new_List;
		return (new_List);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new_List;
	new_List->prev = last;

	return (new_List);
}
