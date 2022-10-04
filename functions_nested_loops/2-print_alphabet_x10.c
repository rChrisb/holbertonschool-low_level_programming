#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * print_alphabet_x10 - print 10 times the alphabet
 *
 */

void print_alphabet_x10(void)
{
	char alph;
	int count = 0;

	while (count < 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		count++;
		_putchar('\n');
	}
}
