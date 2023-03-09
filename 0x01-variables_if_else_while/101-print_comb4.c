#include <stdio.h>
/**
 * main - program that prints all combinations of three digits
 * Return: (0)
 */
int main(void)
{
	int x = '0';
	int y;
	int z;

	do {
		for (y = x + 1; y <= '9'; y++)
		{
			for (z = y + 1; z <= '9'; z++)
			{
				if (x != y)
				{
					putchar(x);
					putchar(y);
					putchar(z);
				}
				if (x == '7' && y == '8' && z == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
		x++;
	} while (x <= '9');
	putchar('\n');
	return (0);
}
