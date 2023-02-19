#include <stdio.h>
/**
 * main - Entry point
 *
 * program will assign values to format specifiers
 *
 * Return: (0) success
 */

int main(void)
{
	char x;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of a char: %d byte(s)\n", (unsigned char)sizeof(x));
	printf("Size of an int: %u byte(s)\n", (unsigned int)sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", (long int)sizeof(l));
	printf("Size of a long long int: %lld byte(s)\n", (long long int)sizeof(ll));
	printf("Size of a float: %d byte(s)\n", (unsigned int)sizeof(f));
	return (0);
}
