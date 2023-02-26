#include "main.h"
/**
 * jack_bauer - every minute of the day from 00:00 to 23:59
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
