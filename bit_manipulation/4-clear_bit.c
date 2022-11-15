#include "main.h"

/**
 * clear_bit - sets a particular bit to 0
 * @n: pointer to a decimal
 * @index: the index we want
 *
 * Return: 1 if success else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
