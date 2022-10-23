#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: first parameter
 *
 * Return: NULL if str is NULL or if insufficient memory, else returns
 * a pointer to a newly allocated space in memory, which contains a
 * copy of the string given as a parameter.
 */

char *_strdup(char *str)
{
	size_t len = strlen(str) + 1;
	char *copy = malloc(len);

	if (str == NULL)
		printf("failed to allocate memory");
	if (copy == NULL)
		return (NULL);
	memcpy(copy, str, len);
	return (copy);

}


