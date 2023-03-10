#include "main.h"
/**
 * puts_half - function that prints second half of a string
 * @str: pointer to string str
 * Return: (void)
 */
void puts_half(char *str)
{
	int i = 0;
	int j = *str / 2;

	while (str[i] != '\0')
	{
		i++;
	}
	if (j % 2 == 1)
	{
		j = (j - 1) / 2;
		j += 1;
	}
	else
	{
		j = i / 2;
	}
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
