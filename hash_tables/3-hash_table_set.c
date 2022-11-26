#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: hashtable
 * @key: key string
 * @value: associated value of key
 *
 * Return: 1 if success, -1 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

}


/**
 * ht_k_v - returns the key-value pair
 *
 * key: key to copy
 * value: value to copy
 *
 * Return: node containing the key-value
 */

hash_node_t *ht_k_v(const char *key, cont char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));
	
	if (node == NULL)
		return (NULL);
	node->key = malloc(strlen(key) + 1);
	if (node->key == NULL)
		return (NULL);
	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (NULL);

	strcpy(node->key, key);
	strcpy(node->value, value);

	node->next = NULL;

	return (node);
}



