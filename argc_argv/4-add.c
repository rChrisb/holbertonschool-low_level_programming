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

	char *s;

	if (argc < 1)
	{
		return (0);
	}

	i = 1;

	while (i < argc)
	{
		int k = 0;

		s = argv[i];

		while (s[k] != '\0')
		{
			if (s[k] < '0' || s[k] > '9')
			{
				printf("%s\n", "Error");
				return (1);
			}
			k++;
		}
		i++;
	}

	for (i = 1; i < argc; i++)
	{
		resul = resul + atoi(argv[i]);
	}
	printf("%d\n", resul);

	return (0);
}

