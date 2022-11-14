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
	list_t h = *head;
	h->next = NULL;

	list_t *new = malloc(sizeof(struct list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = h;
	new = h;
}
