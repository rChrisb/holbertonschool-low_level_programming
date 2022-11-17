#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node a particular index
 * @head: first node
 * @index: index we want
 *
 * Return: 1 if succeeded, else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *new, *new2;

	if (*head == NULL)
		return (-1);

	new = *head;
	new2 = *head;

	for (i = 1; i <= index; i++)
	{
		new2 = new;
		new = new->next;

		if (new == NULL)
			break;
	}

	if (new != NULL)
	{
		if (new == *head)
			*head = (*head)->next;
		new2->next = new->next;
		new->next = NULL;

		free(new);
		return (1);
	}
	else
		return (-1);
}
