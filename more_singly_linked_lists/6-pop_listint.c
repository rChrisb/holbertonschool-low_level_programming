#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: first node
 *
 * Return: head's node data
 */

int pop_listint(listint_t **head)
{
	listint_t *delete;
	int data;

	if (head == NULL)
		return (0);

	delete = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(delete);
	return (data);
}

