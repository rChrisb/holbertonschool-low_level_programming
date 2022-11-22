#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: node
 * @n: data
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(struct dlistint_s));

	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;
	new->prev = last;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
/*	last = *head;*/

/*	while (last->next != NULL)*/
/*		last = last->next;*/

	last->next = new;
	last = new;
	return (new);
}
