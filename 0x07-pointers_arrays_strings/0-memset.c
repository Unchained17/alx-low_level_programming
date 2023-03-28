#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: string
 * @b: constant byte
 * @n: number of bytes (positive)
 * Return: (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	do {
		*(s + j) = b;
		j++;
	} while (j < n);
	return (s);
}
