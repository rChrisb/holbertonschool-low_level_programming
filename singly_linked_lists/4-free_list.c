#include "lists.h"

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		head = head->next;
		free(head->str);
		free(head->next);
		free(head);
	}
}
