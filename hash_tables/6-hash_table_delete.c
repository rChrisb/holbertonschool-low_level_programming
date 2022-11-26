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
	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			node = ht->array[i];
			free(node->key);
			free(node->value);
			ht->array[i] = ht->array[i]->next;
			free(node);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}

