#include "main.h"
/**
 * print_times_table - function that prints the n times table,
 * starting with 0
 * @n: int argument
 * Return: (void)
 */
void print_times_table(int n)
{
	int nm, m, p;

	if (n >= 0 && n <= 25)
	{
		for (nm = 0; nm <= n; nm++)
		{
			_putchar('0');
			for (m = 1; m <= n; m++)
			{
				_putchar(44);
				_putchar(32);
				p = nm * m;
				if (p <= 99)
				{
					_putchar(32);
				}
				else if (p <= 9)
				{
					_putchar(32);
				}
				else if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar((p / 10) % 10 + '0');
				}
				else if (p <= 99 && p >= 10)
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
	else if (n > 15 || n < 0)
		_putchar(32);
}
