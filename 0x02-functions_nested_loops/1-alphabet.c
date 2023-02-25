#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Main function prototype
 * Return: (0)
 */
int print_alphabet(void)
{
        char x = 'a';

        while (x <= 'z')
	{
        x++;
        putchar(x);
        putchar('\n');
	}
	return (0);
}
