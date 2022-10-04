#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _abs - print the absolute value of a number
 * @n: function parameter
 *
 * Return: absolute value of number
 */

int _abs(int n)
{
	if (n < 0)
		n = (-n);
	_putchar(n);
	return (n);
}
