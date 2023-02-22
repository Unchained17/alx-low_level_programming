#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 * Return: (0)
 */
int main(void)
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
