#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: 1st param
 * @c: 2nd param
 *
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	
	for (;; ++s)
	{
		if (*s == c)
			return ((char *)s);
		if (*s == '\0')
			return (NULL);
	}
}
