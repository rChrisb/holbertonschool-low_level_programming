#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: first parameter
 * @height: second parameter
 *
 * Return: pointer to a 2 dimensional array of integers, or NULL if failure or
 * with negative or == 0 parameters
 *
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **ptr;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int) * height);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
			return (NULL);

		i++;
	}

	return (ptr);



}






