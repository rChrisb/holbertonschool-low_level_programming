#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: string parameter
 *
 * Return: s
 */

char *leet(char *s)
{
	char minus[] = {'a', 'e', 'o', 't', 'l'};
	char digit[] = {'4', '3', '0', '7', '1'};

	int i = 0;
	int i_liste;
	int n = sizeof(minus);

	while (s[i])
	{
		for (i_liste = 0; i_liste < n; i_liste++)
		{
			if ((s[i] == minus[i_liste]) || (s[i] == minus[i_liste] - 32))
				s[i] = digit[i_liste];
		}
		i++;
	}
	return (s);
}

