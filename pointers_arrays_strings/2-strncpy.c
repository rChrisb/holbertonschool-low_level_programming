#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: first param
 * @src: second param
 * @n: third param
 *
 * Return: dest
 *
 *
 */


char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
