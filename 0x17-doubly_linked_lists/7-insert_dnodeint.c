#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at given position
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *temp = *h;
	unsigned int i = 0;

	if (idx == 0)
	return (add_dnodeint(h, n));

	while (temp && i < idx - 1)
	{
	temp = temp->next;
	i++;
	}

	if (!temp)
	return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	if (temp->next)
	temp->next->prev = new_node;
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
