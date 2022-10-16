#include "main.h"

/**
 * main - entry point
 * @argc: 1st param
 * @argv: second param
 *
 * Return: 0
 */


int main(int argc, char *argv[])
{
	int i, resul = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i <= argc - 1; i++)
		{
			resul = resul * atoi(argv[i]);
		}
		printf("%d\n", resul);
	}
	return (0);
}
