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
	char *a;

	a = malloc(size * sizeof(char));
	while (j < size)
	{
		*(a + j) = c;
		j++;
	}
	if (size == 0)
	{
		return (0);
	}
	else
		return (a);
}
