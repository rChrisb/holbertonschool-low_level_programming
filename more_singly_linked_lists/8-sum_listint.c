#include "lists.h"

/**
 * sum_listint - sums all the data of a listint_t linked list
 *@head: first node
 *
 * Return: sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	listint_t *new;

	new = head;

	while (new != NULL)
	{
		total = total + new->n;
		new = new->next;
	}
	return (total);
}
