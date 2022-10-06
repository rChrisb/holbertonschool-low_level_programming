#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_square - prints a square
 * @size: parameter
 *
 */

void print_square(int size)
{
	int ligne;
	int colonne;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (ligne = 0; ligne < size; ligne++)
		{
			for (colonne = 0; colonne < size; colonne++)
			{
				_putchar('#');
			}
			_putchar('#');
		}
		_putchar('\n');
	}
}

