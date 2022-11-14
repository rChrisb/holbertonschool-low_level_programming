#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: node
 * @str: str of node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	(*head)->next = NULL;

	new = malloc(sizeof(struct list_s));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = *head;
	new = *head;

	return (new);
}
