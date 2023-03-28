#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: string
 * @c: character to search for
 * Return: (0)
 */
char *_strchr(char *s, char c)
{
	int x;

	x = 0;
	do {
		if (*(s + x) == c)
		{
			return (s + x);
		}
		x++;
	} while (*(s + x) >= '\0');
	return (0);
}
