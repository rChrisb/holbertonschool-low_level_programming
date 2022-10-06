#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
			printf("%s ", f);
		else if ((i % 5 == 0) && (i % 3 != 0))
			printf("%s ", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fb);
		else if (i == 100)
			printf("%s", b);
		else
		{
			printf("%d ", i);
		}
	}

	return (0);
}
