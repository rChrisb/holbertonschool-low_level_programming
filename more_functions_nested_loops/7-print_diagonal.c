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
		for (line = 0; line < n; line++)
		{
			_putchar('\\');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

