#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _isupper - function checking fir uppercase character
 * @c: function parameter
 *
 * Description: single letter input
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (1);
        else
                return (0);
}
