#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * more_numbers - prints 10x 0-14 numbers
 *
 */

void more_numbers(void)
{
	int i;
	int count;

	for (count = 0; count < 11; count++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i % 10) + '0');
			}
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
