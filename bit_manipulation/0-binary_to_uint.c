#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 * @b: string of binary number
 *
 * Return: decimal conversion or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total, power;
	int i, len;

	if (b == NULL)
		return (0);

	i = 0;
	while (b[i] != '\0')
	{
		if ((b[i] != '1') && (b[i] != '0'))
			return (0);
		i++;
	}


	len = strlen(b);
	total = 0;
	power = 1;

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			total = total + power;
		power = power * 2;
	}

	return (total);
}
