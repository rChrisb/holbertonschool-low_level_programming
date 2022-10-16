#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first param
 * @s2: second param
 *
 * Return: 0, < 0, or > 0
 */


int _strcmp(char *s1, char *s2)
{
        while (*s1 == *s2++)
                if (*s1++ == 0)
                        return (0);
        return (*(unsigned char *)s1 - *(unsigned char *) --s2);
}
