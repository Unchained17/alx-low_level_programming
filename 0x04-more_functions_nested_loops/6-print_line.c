#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 * Return: (void)
 */
void print_line(int n)
{
	int i = 1;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
