#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: destination
 * @src: source
 * @n: input
 * Return: (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ind_x;

	ind_x = 0;
	for (; ind_x < n; ind_x++)
		dest[ind_x] = src[ind_x];
	return (dest);
}
