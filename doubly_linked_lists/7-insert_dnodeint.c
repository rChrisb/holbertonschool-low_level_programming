#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: first node
 * @idx: index we want
 * @n: data
 *
 * Return:  the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i;


	new = malloc(sizeof(struct dlistint_s));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
	}
	temp = *h;

	i = 0;
	while (i < idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		i++;
		temp = temp->next;
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	if (temp->next != NULL)
	{
		new->next = temp->next;
		temp->next->prev = new;
		new->next->prev = new;
		temp->next = new;
		new->prev = temp;
	}	

	return (new);
}
