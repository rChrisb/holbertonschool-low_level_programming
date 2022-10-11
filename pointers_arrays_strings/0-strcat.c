#include "main.h"

/**
 * *_strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and
 * then adds a terminating null byte
 * @dest: first param
 * @src: seconde param
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int length;

	length = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
		dest[length + i] = src[i];

	dest[length + i] = '\0';
	return (dest);
}

