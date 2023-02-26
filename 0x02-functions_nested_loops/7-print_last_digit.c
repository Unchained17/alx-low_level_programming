#include "main.h"
/**
 * print_last_digit - Function that prints the last digit of a number.
 * @n: Initialized variable
 * Return: (fd)
 */
int print_last_digit(int n)
{
	int f_d;

	f_d = n % 10;
	if (f_d < 0)
		f_d = f_d * -1;
	_putchar(f_d);
	return (f_d);
}
