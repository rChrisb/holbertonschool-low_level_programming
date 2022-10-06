#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_line - prints a straight line
 * @n: parameter
 *
 */

void print_line(int n)
{
	int line;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

