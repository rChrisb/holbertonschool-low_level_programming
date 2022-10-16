#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _isalpha - function checking for lowercase or uppercase character
 * @c: function parameter
 * Description: single letter input
 *
 * Return: 0 (Success) or 1
 */

int _isalpha(int c)
{
        if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
                return (1);
        else
                return (0);
}
