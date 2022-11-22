#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: node
 * @n: data
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(struct dlistint_s));

	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;

		return (*head);
	}
	
	(*head)->prev = new;
	new->prev = NULL;
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
