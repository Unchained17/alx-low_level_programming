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

	pa = malloc(size * sizeof(char));
	while (j < size)
	{
		*(pa + j) = c;
		j++;
	}
	if (size == 0 || pa == 0)
	{
		return (0);
	}
	return (pa);
}
