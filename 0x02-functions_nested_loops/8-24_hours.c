#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59i
 * Return: (void)
 */
void jack_bauer(void)
{
	int hh = 0;
	int mm;

	while (hh <= 23)
	{
		for (mm = 0; mm <= 59; mm++)
		{
			_putchar((hh / 10) + '0');
			_putchar((hh % 10) + '0');
			_putchar(58);
			_putchar((mm / 10) + '0');
			_putchar((mm % 10) + '0');
			_putchar('\n');
		}
	hh++;
	}
}
