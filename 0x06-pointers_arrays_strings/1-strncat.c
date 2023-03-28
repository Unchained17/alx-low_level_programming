#include "main.h"
/**
 * _strncat - function is similar to the _strcat function,
 * except that it will use at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: pointer to string
 * @src: array of chars
 * @n: integer variable
 * Return: (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *end = dest;

	while (*end != '\0')
	{
		end++;
	}
	while ((n--) > 0 && *src != '\0')
	{
		*end++ = *src++;
	}
	*end = '\0';
	return (dest);
}
