#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: array length
 * @c: character
 * Return: (c) success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j = 0;
	char *pa = {"c"};

	if (size == 0)
	{
		return (0);
	}
	else if (pa == 0)
	{
		return (pa);
	}
	pa = malloc(size * sizeof(char));
	do {
		*(pa + j) = c;
		j++;
	} while (j < size);
	return (pa);
}
