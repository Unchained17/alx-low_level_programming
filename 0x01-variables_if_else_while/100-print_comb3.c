#include <stdio.h>
/**
 * main - program that prints all possible combinations of two digits
 * Return: (0)
 */
int main(void)
{
	int x = '0';
	int y;

	do
	{
		for (y = x + 2; y <= '9'; y++)
		{
			if (x != y)
			{
				putchar(x);
				putchar(y);
				putchar(',');
				putchar(' ');
			}
		}
		x++;
		putchar('\n');
	} while (x <= '9');
	return (0);
}
