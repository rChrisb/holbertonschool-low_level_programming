#include "main.h"

/**
 * set_bit - sets a particular bit to 1
 * @n: pointer to a decimal
 * @index: the index we want
 *
 * Return: 1 if success else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = (1 << index) | *n;
	return (*n);
}
