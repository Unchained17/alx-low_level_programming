#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: pointer to a string
 * Return: (r)
 */
char *_strdup(char *str)
{
	int j, x = 0;
	char *r;

	for (j = str[j]; (str[j]) != '\0'; j++)
		;

	if (str == 0)
	{
		return (0);
	}
	r = (char *)malloc(sizeof(char) * (x + 1));

	if (r == 0)
	{
		return (0);
	}
	for (x = 0; str[x]; x++)
	{
	       *(r + x) = *(str + x);
	}

	return ((char *)r);
}
