#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_last_digit - prints a number's last digit
 * @n: function parameter
 *
 * Return: last digit of parameter
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (n < 0)
		x = x * (-1);
	_putchar(x + '0');
	_putchar('\n');
	return (x);
}
