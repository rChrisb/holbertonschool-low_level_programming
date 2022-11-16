#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: node
 * @n: data
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(struct listint_s));

	if (new == NULL)
		return (NULL);


	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
