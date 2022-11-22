#include "lists.h"

/**
 * free_dlistint - free all lists
 * @head: first node
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new, *another;

	if (head == NULL)
		return;
	new = head;

	while (new != NULL)
	{
		another = new->next;
		free(new);
		new = another;
	}


}
