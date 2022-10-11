#include "main.h"

/**
 * rev_string -  reverses a string
 * @s: string to reverse
 *
 */

void rev_string(char *s)
{
	int i;
	int length;
	int n;
	char temp;

	length = strlen(s);
	n = length - 1;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[n - i];
		s[n - i] = temp;
	}

}

