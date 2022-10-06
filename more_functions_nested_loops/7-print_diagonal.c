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
	int espace;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (diagonal = 0; diagonal < n; diagonal++)
		{
			for (espace = 0; espace < diagonal; espace++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}

