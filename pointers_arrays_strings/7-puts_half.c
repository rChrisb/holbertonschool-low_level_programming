#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: parameter
 *
 */

void puts_half(char *str)
{
	int count = 0;
	int i;

	count = strlen(str);

	if (count % 2 == 1)
		i = (count + 1) / 2;
	else
		i = count / 2;

	for (; i <= count - 1; i++)
		_putchar(str[i]);
	_putchar('\n');
}
