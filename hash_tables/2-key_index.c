#include "hash_tables.h"

/**
 * key_index -  gives you the index of a key
 *
 * @key: string
 * @size: size of the hashtable
 *
 * Return: index/slot of the given key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int alexcro_lafraude = hash_djb2(key) % size;

	return (alexcro_lafraude); /*Bonjour Alexandre mmdrr bon weekend a toi*/
}
