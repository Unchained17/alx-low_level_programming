#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: string 1 (char array)
 * @s2: string 2 ("")
 * Return: (0)
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2; s1++, s2++)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
	}
	return (*s1 - *s2);
}
