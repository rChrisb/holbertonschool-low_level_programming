#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array
 * @size: number of elements in array
 * @value: target value
 * Return: index of the target value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t middle, start = 0, end = size - 1;

	if (size == 0)
		return (-1);
	while (end - start > 1)
	{
		middle = (end + start) / 2;
		if (value > array[middle])
		{
			print_array(array, start, end);
			start = middle + 1;
		}
		else
		{
			print_array(array, start, end);
			end = middle - 1;
		}
	}
	if (array[start] == value)
	{
		print_array(array, start, end);
		return (start);
	}
	else if (array[end] == value)
	{
		print_array(array, start, end);

		return (end);
	}
	else
	{
		print_array(array, start, end);
		printf("Searching in array: %d\n", array[end]);
		return (-1);
	}
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @start: first index
 * @end: last index
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t k;

	printf("Searching in array: ");
	for (k = start; k <= end; ++k)
	{
		if (k != start)
			printf(", ");
		printf("%d", array[k]);
	}
	printf("\n");
}
