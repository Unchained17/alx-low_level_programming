#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings.
 * @s1: string number
 * @s2: second string
 * Return: pointer to character
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len = 0, len2 = 0, l;
	char *p;

	while (s1[i++] != '\0')
	{
		len += 1;
	}
	while (s2[j++] != '\0')
	{
		len2 = len2 + 1;
	}
	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	l = len + len2;
	p = (char *)malloc(sizeof(char) * (l + 1));
	if (p == NULL)
		return (0);
	i = j = 0;
	while (i != len)
	{
		p[i] = s1[i];
		i++;
	}
	while (j != len2)
	{
		p[i] = s2[j];
		i = i + 1;
		j = j + 1;
	}
	p[l] = '\0';
	return (p);
}
