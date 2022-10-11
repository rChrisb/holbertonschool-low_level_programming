#include "main.h"

/**
 * *string_toupper - changes all lowercase letters
 * of a string to uppercase
 *
 * @s: string parameter
 *
 * Return: the same string but in uppercase
 */

char *string_toupper(char *s)
{
	int i;
	int n = strlen(s);

	for (i = 0; i < n; i++)
	{
		if (s[i] <= 'z' && s[i] >= 'a')
			s[i] = s[i] - 32;
	}
	return (s);
}
