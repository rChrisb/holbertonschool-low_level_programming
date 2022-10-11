#include "main.h"

/**
 * *_strncat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and
 * then adds a terminating null byte, and using n bytes
 * @dest: first param
 * @src: seconde param
 * @n: third param
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int length;

	length = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[length + i] = src[i];

	dest[length + i] = '\0';
	return (dest);
}

