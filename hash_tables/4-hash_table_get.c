#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hashtable
 * @key: key string
 *
 * Return: value associated with given key, or NULL if no match
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index(key, ht->size);
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);

	node = ht->array[index];
	if (node == NULL)
		return (NULL);

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
