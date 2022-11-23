#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node a particular index
 * @head: first node
 * @index: index we want
 *
 * Return: 1 if succeeded, else -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *new;

	if (*head == NULL)
		return (-1);

	new = *head;

	if (index == 0)
	{
		free_dlistint(new);
		return (1);
	}
	
	i = 0;
	while (new->next != NULL)
	{
		if (i == index)
		{
			new->next->prev = new->prev;
			new->prev->next = new->next;
			free(new);
			return (1);
		}
		new = new->next;
		i++;
	}

	return (-1);
}




