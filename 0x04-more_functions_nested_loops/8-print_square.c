#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line.
 * @size: the size of the square
 * Return: (void)
 */
void print_square(int size)
{
	int i_t, j_t;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i_t = 1; i_t <= size; i_t++)
		{
			for (j_t = 1; j_t <= size; j_t++)
			{
				_putchar(' ');
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
