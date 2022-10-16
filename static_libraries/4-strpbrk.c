#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 *  @s: 1st param
 *  @accept: 2nd param
 *
 *  Return: pointer to the byte in s that matches one of
 *  the bytes in accept, or NULL if no such byte is found
 *
 */


char *_strpbrk(char *s, char *accept)
{
        const char *scan;
        int c, sc;

        while ((c = *s++) != 0)
        {
                for (scan = accept; (sc = *scan++) != 0;)
                        if (sc == c)
                                return (s - 1);
        }
        return (NULL);

}
