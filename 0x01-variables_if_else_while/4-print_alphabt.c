#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: (0)
 */
int main(void)
{
	char l_c, e, q;

	e = 'e';
	q = 'q';
	for (l_c = 'a'; l_c <= 'z'; l_c++)
	{
	if (l_c != e && l_c != q)
	putchar(l_c);
	}
	putchar('\n');
	return (0);
}
