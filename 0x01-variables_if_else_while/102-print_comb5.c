#include <stdio.h>
/**
 * main - program that prints all combinations of 2 two-digit numbers
 * Return: (0)
 */
int main(void)
{
	int x_ = 0;
	int _y;

	while (x_ <= 98)
	{
		for (_y = x_ + 1; _y <= 99; _y++)
		{
			putchar((x_ / 10) + '0');
			putchar((x_ % 10) + '0');
			putchar(' ');
			putchar((_y / 10) + '0');
			putchar((_y % 10) + '0');
			if (x_ == 98 && _y == 99)
				break;
			putchar(',');
			putchar(' ');
		}
		x_++;
	}
	putchar('\n');
	return (0);
}
