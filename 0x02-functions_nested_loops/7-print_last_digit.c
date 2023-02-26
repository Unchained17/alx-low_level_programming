#include "main.h"
/**
 * print_last_digit - Function that prints the last digit of a number.
 * @n: Optional parameters
 * Return: (f) || (-f)
 */
int print_last_digit(int n)
{
	int f;

	f = n % 10;
	if (n > 0)
	{
	_putchar(f + 48);
	return (f);
	}
	else
		_putchar(-f + 48);
	return (-f);
}
