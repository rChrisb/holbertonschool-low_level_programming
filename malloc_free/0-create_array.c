#include "main.h"

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 *
 * @size: first parameter
 * @c: second parameter
 *
 * Return: NULL if size = 0 or if it fails, else returns
 * a pointer to the arrays
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = (char) c;
	}

	if (size == 0 || arr == NULL)
		return (NULL);
	else
		return (arr);
	free(arr);
}


