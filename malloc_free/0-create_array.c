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
	unsigned int i;
	char *arr = malloc(size);

	if (size == 0 || arr == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
	{
		arr[i] = (char) c;
	}
	return (arr);
	free(arr);
}


