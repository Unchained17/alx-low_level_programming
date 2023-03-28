#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: the storage for the string copy (copy to)
 * @src: the source string (copy from)
 * @n: max number of bytes to be copied from src.
 * Return: (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
