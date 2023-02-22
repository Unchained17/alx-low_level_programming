#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
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
