#include "lists.h"

/**
 * free_listint2 - free all lists
 * @head: first node
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *new, *new2;

	new = *head;

	if (*head == NULL)
		printf("Freed !\n");
		return;
	while (new != NULL)
	{
		new2 = new->next;
		free(new);
		new = new2;

	}
	*head = NULL;
}
