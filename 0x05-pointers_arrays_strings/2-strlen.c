#include "main.h"
#include <string.h>
/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to parameters
 * Return: (len)
 */
int _strlen(char *s)
{
	int len;

	while (*s++)
		len++;
	return (len);
}
