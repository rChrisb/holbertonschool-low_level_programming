#include "lists.h"

/**
 * free_listint2 - free all lists
 * @head: first node
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;



	while (*head != NULL)
	{
		new = *head;
		*head = new->next;
		free(new);
	}
	*head = NULL;

}
