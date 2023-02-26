#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int z = 0;
	int x, c;

	while (z <= 9)
	{
		_putchar('0');
		for (x = 1; x <= 9; x++)
		{
			_putchar(',');
			_putchar(' ');
			c = z * x;
			if (c <= 9)
			{
			_putchar(' ');
			}
			else
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
		z++;
	}
}
