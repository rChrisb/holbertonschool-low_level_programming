#include "lists.h"

/**
 * sum_dlistint - sums all the data of a dlistint_t linked list
 *@head: first node
 *
 * Return: sum of all the data (n) of a listint_t linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	dlistint_t *new;

	new = head;

	while (new != NULL)
	{
		total = total + new->n;
		new = new->next;
	}
	return (total);
}
