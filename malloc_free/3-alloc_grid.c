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
	int i, k;
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
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(ptr[i]);
			}
			free(ptr);
		}
		i++;
	}

	for (i = 0; k < width; k++)
		ptr[i][k] = 0;
	return (ptr);


}






