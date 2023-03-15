#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: array length
 * @c: character
 * Return: (pa) success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j = 0;
	char *a;

	if (size == 0)
	{
		return (0);
	}
	a = (void *)malloc(size * sizeof(char));
	if (a == 0)
	{
		return (0);
	}
	do {
		*(a + j) = c;
		j++;
	} while (j < size);
	return ((char *)a);
}
