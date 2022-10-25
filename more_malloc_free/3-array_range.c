#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: first parameter
 * @max: second parameter
 *
 * Return: NULL if min > max or if it fails, else returns the
 * pointer to the newly created array
 *
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
	{
		ptr[i] = min + i;
		ptr[(max - min)] = max;
	}

	return (ptr);
}
