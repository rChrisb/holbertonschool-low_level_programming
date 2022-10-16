#include "main.h"

/**
 * *_strstr - finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: 1st param
 * @needle: 2nd param
 *
 * Return: NULL or a pointer to the beginning of the located substring
 *
 */

char *_strstr(char *haystack, char *needle)
{
        register char *a, *b;

        b = needle;

        if (*b == 0)
        {
                return (haystack);
        }
        for ( ; *haystack != 0; haystack++)
        {
                if (*haystack != *b)
                {
                        continue;
                }

                a = haystack;

                while (1)
                {
                        if (*b == 0)
                        {
                                return (haystack);
                        }
                        if (*a++ != *b++)
                        {
                                break;
                        }
                }

                b = needle;
        }
        return (NULL);
}
