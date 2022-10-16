#include "main.h"

/**
 * *_memcpy - copies n bytes from memory area src
 * to memory area dest
 * @dest: 1st param
 * @src: 2nd param
 * @n: 3rd param
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        char *d = dest;
        const char *s = src;

        while (n--)
                *d++ = *s++;

        return (dest);
}
