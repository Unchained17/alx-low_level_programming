#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: the storage for the string copy
 * @src: the source string
 * @n: max number of bytes to be copied from src.
 * Return: (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, z = 0;
	
	while (*(src + x) && x < n)
		z++;
	while (*(src + x) && x < n )
	{
		*(dest + x) = *(src + x);
		x++;
	}
	x = z;
	while (x < n)
	{
		*(dest + x) = '\0';
		x++;
	}
	return (dest);
}
