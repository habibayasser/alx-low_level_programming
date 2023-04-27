#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -  adds a new node at
 * the end of a list_t list.
 * @head: pointer to the first node
 * @str: pointer to the elemant
 *
 * Return: the address of the new element
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int c = 0;
	list_t *temp = *head;

	while (str[c])
		c++;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	
	new_node->str = strdup(str);
	new_node->c = c;
	new_node->next = NULL;

	if (*head == NULL)
	{
	       	head = new_node;
		return (new_node);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
