#include "main.h"
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: initial digit printed
 * Return: (void)
 */
void print_to_98(int n)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			if (x <= 9)
			{
				_putchar(x);
				_putchar(44);
				_putchar(32);
			}
			else
			{		
				_putchar(x);
				_putchar(n);
				_putchar(44);
				_putchar(32);
			}
		}
	}
	_putchar('\n');
}
