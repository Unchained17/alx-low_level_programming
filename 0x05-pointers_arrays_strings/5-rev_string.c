#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses a string
 * @s: pointer to paramater s
 * Return: (0)
 */
void rev_string(char *s)
{
	int c, i, j;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
