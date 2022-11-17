#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: first node
 * @idx: index we want
 * @n: data
 *
 * Return:  the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	new = malloc(sizeof(struct listint_s));

	if (new == NULL)
		return (*head);

	else
	{
		new->n = n;
		new->next = NULL;

		temp = *head;

		for (i = 1; i <= idx; i++)
		{
			temp = temp->next;
			if (temp == NULL)
				break;
		}
		if (temp != NULL)
		{
			new->next = temp->next;
			temp->next = new;
		}

	}
	return (new);
}
