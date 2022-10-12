#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: first param
 * @accept: second param
 *
 * Return: number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */


unsigned int _strspn(char *s, char *accept)
{
	const char *s1 = s;
	const char *c;

	while (*s)
	{
		for (c = accept; *c; c++)
		{
			if (*s == *c)
				break;
		}
		if (*c == '\0')
			break;
		s++;
	}
	return (s - s1);
}
