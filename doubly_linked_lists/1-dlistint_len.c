#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: node
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
/*		if (h->str == NULL)*/
/*			printf("[0] (nil)\n");*/

/*		else*/
/*			printf("[%d] %s\n", h->len, h->str);*/
		h = h->next;

		i++;
	}

	return (i);
}
