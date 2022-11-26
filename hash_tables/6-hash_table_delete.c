#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hashtable to be deleted
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	hash_table_t *table;

	if (ht == NULL)
		return;

	table = ht;

	i = 0; 
	while (i < ht->size)
	{
		node = table->array[i];
		while (node != NULL)
		{
			free(node->key);
			free(node->value);
			free(node);
			node = node->next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}

