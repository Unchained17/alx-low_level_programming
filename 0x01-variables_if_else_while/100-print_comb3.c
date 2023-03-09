#include <stdio.h>
/**
 * main - program that prints all possible combinations of two digits
 * Return: (0)
 */
int main(void)
{
	int x = '0';
	int y;

	do {
		for (y = x + 1; y <= '9'; y++)
		{
			if (x != y)
			{
				putchar(x);
				putchar(y);
			}
			if (x == '8' && y == '9')
			break;
			putchar(',');
			putchar(' ');
		}
		x++;
	} while (x <= '9');
	putchar('\n');
	return (0);
}
