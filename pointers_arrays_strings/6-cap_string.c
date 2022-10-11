#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: string as parameter
 *
 * Return: s
 */

char *cap_string(char *s)
{
	char separ[] = {' ', '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41, '{', '}'};

	int n = strlen(s);
	int i_sep;

	int index_string = 0;

	int i = index_string;

	while (s[i])
	{
		for (i_sep = 0; i_sep < n; i_sep++)
		{
			if ((i == 0 || s[i - 1] == separ[i_sep]) && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] = s[i] - 32;



		}

		i++;
	}
	return (s);
}



