#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: pointer to a string
 * Return: (r)
 */
char *_strdup(char *str)
{
	int x, j = strlen(str);
	char *r;

	r = (char *)malloc(sizeof(char) * (j + 1));
	if (r == 0)
	{
		free(r);
	}
	for (x = 0; *(str + x) != '\0'; x++)
	{
	       *(r + x) = *(str + x);
	}
	*(r + x) = '\0';
	return ((char *)r);
}
