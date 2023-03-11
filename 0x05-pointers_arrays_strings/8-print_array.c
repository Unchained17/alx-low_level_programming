#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of 
 * an array of integers, followed by a new line
 * @a:
 * @n:;
 * Return: (void)
 */
void print_array(int *a, int n)
{
	int a_n;

	for (a_n = 0; a_n <= n; a_n++)
	{
		if (a_n != (n - 1))
		{
			printf("%d", a[a_n]);
			printf(", ");
		}
		if (a[a_n] == -1024)
			break;
	}
	printf("\n");
}
