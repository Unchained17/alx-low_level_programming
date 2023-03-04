#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: pointer to parameter
 * @b: pointer to data type argument
 * Return: (void)
 */
void swap_int(int *a, int *b)
{
	int z_x = *a;
	*a = *b;
	*b = z_x;
}
