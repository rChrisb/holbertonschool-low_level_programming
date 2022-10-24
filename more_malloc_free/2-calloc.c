#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of integers
 * @size: size of each integer
 *
 * Return: void pointer to allocated memory
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, size * nmemb);

	return (ptr);
}
