#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'C program that prints the size of various types
 * on the computer it is compiled and run on.'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intType;
	float floatType;
	long int longintType;
	char charType;
	long long int longlongintType;

	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longintType));
	printf("Size of a long long int: %zu bytes\n", sizeof(longlongintType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType);



return (0);
}
