#include <stdio.h>
#include "main.h"
/**
 * main - The print alphabet
 * Print_alphabet: prototype function
 * Return: (0)
 */
void print_alphabet(void)
{
	char x='a';

	while (x <= 'z')
	{
	x++;
	putchar(x);
	putchar('\n');
	}
	return;
}
