#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: pointer to integer
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int x, y;

	x = n - 1;
	while (x >= (n / 2))
	{
		y = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = y;
		x--;
	}
}
