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

	while (*(str + j) != '\0')
		j++;
	r = (char *)malloc(sizeof(char) * (j + 1));
	if (r == 0)
	{
		return (0);
	}
	for (x = 0; *(str + x) != '\0'; x++)
	{
	       *(r + x) = *(str + x);
	}
	return (r);
}
