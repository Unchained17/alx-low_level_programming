#include "main.h"
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: pointer to argument
 * Return: (void)
 */
void puts2(char *str)
{
	int _j = 0;
	int i_ = 0;

	while (str[i_] != '\0')
		i_++;

	while (_j < i_)
	{
		_putchar(str[_j]);
	_j = _j + 2;
	}
	_putchar('\n');
}

