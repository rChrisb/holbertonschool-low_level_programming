#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _isdigit - function checking if number is a digit 0-9
 * @c: function parameter
 *
 * Description: single letter input
 *
 * Return: 0 (Success) or 1
 */

int _isdigit(int c)
{
        if (c >= 48 && c <= 57)
                return (1);
        else
                return (0);
}
