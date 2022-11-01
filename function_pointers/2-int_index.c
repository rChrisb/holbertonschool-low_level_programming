#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the name of the array
 * @size: the array's size
 * @cmp: function pointer
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				break;
			}
			i++;
		}
		return (i);
	}
	else
		return (-1);




}
