#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: node
 * @str: str of node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	new = malloc(sizeof(struct list_s));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = NULL;
	new->len = strlen(str);

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	last = *head;

	while (last->next != NULL)
		last = last->next;

	last->next = new;

	return (*head);
}
