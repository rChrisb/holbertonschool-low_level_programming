#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_triangle - prints a triangle
 * @size: parameter
 *
 */

void print_triangle(int size)
{
	int ligne;
	int colonne;
	int espace;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (ligne = 0; ligne < size; ligne++)
		{
			for (espace = 0; espace <= (size - 1 - ligne); espace++)
				_putchar(' ');
			for (colonne = 0; colonne <= ligne; colonne++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

