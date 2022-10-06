#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * more_numbers - print 0-14 numbers
 *
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		if (i > 9)
			_putchar(i % 10)
		_putchar(i + '0');
	}
	_putchar('\n');
}
