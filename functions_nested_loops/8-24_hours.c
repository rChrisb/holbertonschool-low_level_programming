#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * jack_bauer - function checking fir lowercase character
 *
 * Description: single letter input
 *
 *
 */

void jack_bauer(void)
{
	int h;
	int j;

	for (h = 0; h < 24; h++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}

