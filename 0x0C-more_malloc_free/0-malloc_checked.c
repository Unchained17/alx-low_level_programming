#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: positive integer
 * Return: (p)
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == 0)
	{
		exit(98);
	}
	return (p);
}
