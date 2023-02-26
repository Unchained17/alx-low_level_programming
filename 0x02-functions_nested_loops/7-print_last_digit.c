#include "main.h"
/**
 * print_last_digit - Function that prints the last digit of a number.
 * @n: Initialized variable
 * Return: (final)
 */
int print_last_digit(int n)
{
	int final;

	final = n % 10;
	if (final < 0)
		final = final * -1;
	_putchar(final);
	return (final);
}
