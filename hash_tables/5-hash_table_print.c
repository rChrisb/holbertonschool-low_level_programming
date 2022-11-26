#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hashtable to be printed
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, x;
	hash_node_t *node;
	hash_table_t *table;

	if (ht == NULL)
		return;

	table = ht;
	x = 0;
	i = 0;

	printf("{");
	while (i < ht->size)
	{
		node = table->array[i];
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			if (node->next != NULL)
				printf(", ");
			node = node->next;
			x++;
		}
		if (table-<array[i + 1] != NULL && x > 0)
			printf(", ");
		i++;
	}
	printf("}\n");
}
