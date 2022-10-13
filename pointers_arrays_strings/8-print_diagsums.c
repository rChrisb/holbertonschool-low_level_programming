#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: array
 * @size: second param
 *
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int diago_1 = 0;
	int diago_2 = 0;

	for (i = 0; i < size * size ; i = i + size + 1)
	{
		diago_1 = diago_1 + a[i];
	}

	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
	{
		diago_2 = diago_2 + a[j];
	}

	printf("%d, %d\n", diago_1, diago_2);
}


