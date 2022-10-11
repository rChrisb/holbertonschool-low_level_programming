/**
 * *_memset -  fills memory with a constant byte
 * @s: first parameter
 * @b: second parameter
 * @n: third parameter
 *
 * Return: s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	register unsigned char *ptr = (unsigned char *)s;

	while (n-- > 0)
		*ptr++ = b;

	return (s);
}
