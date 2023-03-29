#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string
 * @accept: pointer to character
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l_1 = 0, l_2 = 0, prefix = 0, short_len, j;

	while ((s[l_1] && accept[l_2]) != '\0')
	{
		l_1++;
		l_2++;
	}
	short_len = l_1 < l_2 ? l_1 : l_2;
	for (j = 0; j < short_len; j++)
	{
		if (s[j] == accept[j])
		{
			prefix++;
		}
		else
		{
			break;
		}
	}
	return (prefix);
}
