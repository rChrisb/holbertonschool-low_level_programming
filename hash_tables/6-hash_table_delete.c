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


	i = 0;
	while (ht && (i < ht->size))
	{
		if (ht->array[i])
		{
			another = ht->array[i];
			while (node = another)
			{
				another = another->next;
				free(node->key);
				free(node->value);
				free(node);
			}
		i++;
	}
	free(ht->array);
	free(ht);
}

