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
	hash_node_t *node, *another;

	if (ht == NULL)
		return;
	node = NULL;
	another = NULL;

	i = 0;
	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			another = ht->array[i];
		while (another != NULL)
		{
			node = another;
			another = another->next;
			if (node->key != NULL)
				free(node->key);
			if (node->value != NULL)
				free(node->value);
			free(node);
		}
	}
	free(ht->array);
	free(ht);
}

