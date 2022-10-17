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
	int i, resul = 0;

	if (argc < 1)
	{
		return (0);
	}
	else
	{
		for (i = 1; i <= argc - 1; i++)
		{
			if (!(atoi(argv[i])))
			{
			
				printf("%s\n", "Error");
				return (1);
			}
			resul = resul + atoi(argv[i]);
		}
		printf("%d\n", resul);
	}
	return (0);
}
