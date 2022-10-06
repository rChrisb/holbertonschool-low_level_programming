#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_diagonal - prints a diagonal
 * @n: parameter
 *
 */

void print_diagonal(int n)
{
	int diagonal;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (diagonal = 0; diagonal < n; diagonal++)
		{
			_putchar('\\');
			_putchar('\n');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

