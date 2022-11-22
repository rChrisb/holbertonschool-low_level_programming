#include "lists.h"

/**
 * free_dlistint - free all lists
 * @head: first node
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	if (head == NULL)
		return;



	while (head != NULL)
	{
		new = head;
		head = new->next;
		head->prev = NULL;
		free(new);
	}
	

}
