#include "main.h"
/**
 * main - function name
 * Return: (0)
 */
void print_alphabet(void)
{
        char x = 'a';
        do 
	{
		x++;
                _putchar(x);
		_putchar('\n');
        } while (x <= 'z');
	return;
}
