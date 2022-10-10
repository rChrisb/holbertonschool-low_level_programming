#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: parameter
 *
 */


void puts2(char *str)
{
	int count = 0;
	int i;

	count = strlen(str);

	for (i = 0; i <= count - 1; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
