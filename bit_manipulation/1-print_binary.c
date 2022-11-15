#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal parameter
 *
 */

void print_binary(unsigned long int n)
{
	int i = 0, y, k, size;

	if (n == 0)
		printf("0");
	y = n;
	while (y != '\0')
	{
		i++;
		y = y >> 1;
	}
	
	for (size = i - 1; size >= 0; size--)
	{
		k = n >> size;

		if (k & 1)
			printf("1");
		else
			printf("0");
	}
}
