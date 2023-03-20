#include "main.h"
/**
 * _strncat - function is similar to the _strcat function,
 * except that it will use at most n bytes from src; and src does not need to be
 * null-terminated if it contains n or more bytes
 * @dest: pointer to string
 * @src: array of chars
 * @n: integer variable
 * Return: (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while ((dest[y++] == src[x++]) != '\0')
		;
	for (x = 0, y = 0; ((src[y] != '\0') && (x < n)); x++, y++)
	{
	       dest[x] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
