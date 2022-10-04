#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * print_to_98 - prints to 98
 * @n: function parameter
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	else
	{printf("98");
	}
	printf("\n");
}
