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

	if (ht == NULL)
		return;

	i = 0;
	for (; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			node = ht->array[i];
			free(node->key);
			free(node->value);
			ht->array[i] = ht->array[i]->next;
			free(node);
		}
	}
	free(ht->array);
	free(ht);
}

