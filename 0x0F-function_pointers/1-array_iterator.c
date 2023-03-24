#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: pointer to an array
 * @size: number of elements to print
 * @action: pointer to the function
 * Return: (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned j;

	if (array == 0 || *action == 0)
		return;
	for (j = 0; j < size; j++)
		(*action)(*(array + j));
}
