#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to newly allocated space in memory containing
 * the contents of s1 followed by s2 and '\0', else returns NULL
 *
 */

char *str_concat(char *s1, char *s2)
{
	int len, l1, l2;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);
	len = l1 + l2 + 1;

	ptr = malloc(len);

	if (ptr == NULL)
		return (NULL);
	memcpy(ptr, s1, l1 + 1);
	strcat(ptr, s2);

	return (ptr);
	free(ptr);
}
