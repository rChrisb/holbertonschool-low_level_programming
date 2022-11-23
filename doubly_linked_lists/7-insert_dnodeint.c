#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @head: first node
 * @idx: index we want
 * @n: data
 *
 * Return:  the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
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
		new->next = *head;
		*head = new;
	}
	else
	{
		temp = *head;
		for (i = 0; i < idx - 1; i++)
		{
			temp = temp->next;
			if (temp == NULL)
				return (NULL);
		}
		new->next = temp->next;
		new->prev = temp;
		if (temp->next != NULL)
			temp->next->prev = new;
		temp->next = new;
	}

	return (new);
}
