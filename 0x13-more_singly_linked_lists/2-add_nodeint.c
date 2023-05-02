#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint -  adds a new node at the beginning
 * of a listint_t list.
 * @head: pointer to the first node in the linked list
 * @n: number of element
 *
 * Return:  the address of the new element
 * or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->head = next;

	*head = node;

	return (node);
}
