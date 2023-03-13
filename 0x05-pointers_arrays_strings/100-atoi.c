#include "main.h"
/**
 * _atoi - function that convert a string to an integer.
 * @s: string
 * Return: (0)
 */
int _atoi(char *s)
{
	int i = 0, min = 1, x = 0;
	unsigned int ui = 0;

	for (; s[i]; i++)
	{
		if (s[i] == 45)
		{
			min = min * -1;
		}
		for (; s[i] >= '0' && s[i] <= '9'; i++)
		{
			x = 1;
			ui = (ui * 10) + (s[i] - '0');
		}
		if (x == 1)
		{
			break;
		}
	}
	ui *= min;
	return (ui);
}
