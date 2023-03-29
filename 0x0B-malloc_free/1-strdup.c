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
	int x, j = 0;
	char *r;

	if (str == 0)
		return (0);
	while (*(str + j) != '\0')
	{
		j++;
	}
	r = (char *)malloc(sizeof(char) * (j + 1));
	if (r == 0)
	{
		return (0);
	}
	x = 0;
	while (*(str + x) != '\0')
	{
		*(r + x) = *(str + x);
		x++;
	}
	return (r);
}
