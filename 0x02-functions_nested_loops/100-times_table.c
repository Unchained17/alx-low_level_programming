#include "main.h"
/**
 * print_times_table - function that prints the n times table,
 * starting with 0
 * @n: int argument
 * Return: (void)
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (y = 1; y <= n; y++)
			{
				_putchar(44);
				_putchar(32);
				z = x * y;
				if (z <= 99)
					_putchar(32);
				if (z <= 9)
					_putchar(32);
				if (z >= 100)
				{
					_putchar((z / 100) + '0');
					_putchar(((z / 10)) % 10 + '0');
				}
				else if (z <= 99 && z >= 10)
				{
					_putchar((z / 10) + '0');
				}
				_putchar((z % 10) + '0');
			}
			_putchar('\n');
		}
	}
}	
