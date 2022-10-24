#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first parameter
 * @s2: second parameter
 * @n: third parameter
 *
 * Return: NULL if it fails, if it's passed as empty string, else
 * returns pointer shall point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, l1, l2;
	char *ptr;

	if ((s1 == NULL) && (s2 != NULL))
		s1 = "";
	if ((s1 != NULL) && (s2 == NULL))
		s2 = "";
	if ((s1 == NULL) && (s2 == NULL))
		s1 = s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);
	len = l1 + n + 1;

	if (n >= l2)
		n = l2;

	ptr = malloc(len);

	if (ptr == NULL)
		return (NULL);
	memcpy(ptr, s1, l1 + 1);
	strncat(ptr, s2, n);

	return (ptr);
	free(ptr);

}
