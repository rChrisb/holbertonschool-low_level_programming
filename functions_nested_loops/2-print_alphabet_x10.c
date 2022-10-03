#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * print_alphabet_x10 - print 10 times the alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alph = 'a';
	int count = 0;

	while (count < 10)
	{
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		count++;
		_putchar('\n');
	}
}
