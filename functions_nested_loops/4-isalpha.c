/**
 * _islower - function checking fir lowercase character
 *
 * Description: single letter input
 *
 * Return: 0 (Success) or 1
 */

int _isalpha(int c);
{
	if (((c >= 'a') && (c <= 'z')) || (c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
