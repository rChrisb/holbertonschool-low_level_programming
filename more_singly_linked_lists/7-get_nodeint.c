#include "lists.h"

/**
 * get_nodeint_at_index - Write a function that returns the
 * nth node of a listint_t linked list
 * @head: first node
 * @index: inedex we want
 *
 * Return: the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *new;

	new = head;
	while (new != NULL && i < index)
	{
		i++;
		new = new->next;
	}
	return (new);
}
