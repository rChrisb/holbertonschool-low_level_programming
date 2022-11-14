#include "lists.h"

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free(head->str);
	free(head->next);
	free(head);
}
