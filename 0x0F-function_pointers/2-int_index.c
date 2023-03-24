#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @size: number of elements in the array.
 * @cmp: pointer to the function to be used to compare values.
 * @array: array of integers.
 * Return: (0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == 0 || size <= 0 || cmp == 0)
	{
		return (-1);
	}
	x = 0;
	for (; x < size; x++)
	{
		if ((*cmp)(*(array + x)))
			return (x);
	}
	return (0);
}
