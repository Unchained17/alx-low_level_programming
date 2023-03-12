#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of
 * an array of integers, followed by a new line
 * @a: array
 * @n: the number of elements of the array to be printed
 * Return: (void)
 */
void print_array(int *a, int n)
{
	int j_n = 0;

	while (j_n < n)
	{
		printf("%d", a[j_n]);
		if (j_n != (n - 1))
		{
			printf(", ");
		}
		else
			break;
		j_n++;
	}
	printf("\n");
}
