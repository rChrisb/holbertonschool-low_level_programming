#include "main.h"


/**
 * print_chessboard - prints the chessboard
 *
 * @a: an array of size 8
 *
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	int n = sizeof(a);

	while (i < n)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
		i++;
	}
}
