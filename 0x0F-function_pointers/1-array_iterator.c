#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: pointer to an array
 * @size: amount of elements to print
 * @action: pointer to the function
 * Return: (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned j = 0;

	if (array == 0 || *action == 0)
		return;
	do {
		(*action)(*(array + j));
		j++;
	} while (j < size);
}
