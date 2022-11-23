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
	dlistint_t *new, *new2;

	if (*head == NULL)
		return (-1);

	if (head == NULL)
		return (-1);

	new = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(new);
		return (1);
	}

	i = 0;
	while (i < (index - 1))
	{
		if (new == NULL)
			return (-1);
		new = new->next;
		i++;
	}
	new2 = (new->next)->next;
	if (new2 != NULL)
		new2->prev = new;
	free(new->next);
	new->next = new2;

	return(1);
}
