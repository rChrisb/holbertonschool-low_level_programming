#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _islower - function checking fir lowercase character
 * @n: function parameter
 * Description: single letter input
 *
 * Return: 0 (Success) or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

