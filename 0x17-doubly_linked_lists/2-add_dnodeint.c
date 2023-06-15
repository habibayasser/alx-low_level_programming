#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *list_new;

	new = malloc(sizeof(dlistint_t));
	if (list_new == NULL)
		return (NULL);

	list_new->n = n;
	list_new->prev = NULL;
	list_new->next = *head;
	if (*head != NULL)
		(*head)->prev = list_new;
	*head = list_new;

	return (list_new);
}
