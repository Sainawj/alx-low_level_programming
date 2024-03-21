#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node
 * at index index of a dlistint_t linked list
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeds, -1 if it fails
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *node_to_delete;
	unsigned int i;

	if (*head == NULL)
	return (-1);

	temp = *head;

	if (index == 0)
	{
	*head = (*head)->next;
	if (*head)
	(*head)->prev = NULL;
	free(temp);
	return (1);
	}

	for (i = 0; temp != NULL && i < index - 1; i++)
	temp = temp->next;

	if (temp == NULL || temp->next == NULL)
	return (-1);

	node_to_delete = temp->next;

	temp->next = node_to_delete->next;
	if (node_to_delete->next)
	node_to_delete->next->prev = temp;
	free(node_to_delete);

	return (1);
}
