#include "main.h"
/**
 * print_alphabet_x10 - Function name
 * Return void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c = 'a';

	do {
		i++;
		
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	} while (i <= 9);
	return;
}
