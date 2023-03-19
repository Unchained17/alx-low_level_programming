#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: pointer to a string
 * Return: (p)
 */
char *_strdup(char *str)
{
	int j = 0, x = 1;
	char *p;

	if (str == 0)
	{
		return (0);
	}
	while (str[x])
	{
		x++;
	}
	p = (char *)malloc((sizeof(char) * j) + 1);
	if (p == 0)
		return (0);
	while (j < x)
	{
		*(p + j) = *(str + j);
		j++;
	}
	while (*(p + j) != '\0')
		;
	return ((char *)p);
}
