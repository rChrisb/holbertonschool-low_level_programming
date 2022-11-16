#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list_t list
 * @head: node
 * @n: data
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(struct listint_s));

	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;

	while (last->next != NULL)
		last = last->next;

	last->next = new;

	return (new);
}
