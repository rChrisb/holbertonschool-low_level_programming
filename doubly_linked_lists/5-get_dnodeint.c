#include "lists.h"

/**
 * get_dnodeint_at_index - Write a function that returns the
 * nth node of a listint_t linked list
 * @head: first node
 * @index: inedex we want
 *
 * Return: the nth node of a dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *new;

	new = head;
	while (new != NULL && i < index)
	{
		i++;
		new = new->next;
	}
	return (new);
}
