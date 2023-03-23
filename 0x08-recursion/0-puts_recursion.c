#include "main.h"
/**
 * _puts_recursion - recursive function that prints a string,
 * followed by a new line.
 * @s: array of characters
 * Return: (void)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (!*s)
		_putchar('\n');
}
