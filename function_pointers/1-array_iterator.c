#include "function_pointers.h"

/**
 * array_iterator
 * @array: array name
 * @size: size of array
 * @action: instruction to do on each element of array
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}





}
