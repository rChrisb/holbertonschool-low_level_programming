#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal number
 * @index: index we want
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	char binary[256];
	unsigned int lenght = 0;

	while (n != 0)
	{
		if (n % 2 == 0)
			binary[lenght] = '0';
		else
			binary[lenght] = '1';
		n = n / 2;
		lenght++;
	}

	binary[lenght] = '\0';

/*	middle = lenght / 2; don't forget to declare middle, i, temp*/

/*	for (i = 0; i < middle; i++)*/
/*	{*/
/*		temp = binary[lenght - 1 - i];*/
/*		binary[lenght - 1 - i] = binary[i];*/
/*		binary[i] = temp;*/
/*	}*/

	return (binary[index] - '0'); /*makes char to int*/



}
