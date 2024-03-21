#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: pointer to head of the list
 * Return: sum of all the data (n) or 0 if the list is empty
 **/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head != NULL; head = head->next)
	{
	sum += head->n;
	}

	return sum;
}
