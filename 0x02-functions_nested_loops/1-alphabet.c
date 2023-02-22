#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 * Return: void
 */
void print_alphabet(void)
{
	char z = 'a';

	while (z <= 'z')
	{
	z++;
	putchar(z);
	putchar('\n');
	}
	return;
}
