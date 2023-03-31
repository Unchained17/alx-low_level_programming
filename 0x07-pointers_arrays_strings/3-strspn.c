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
	unsigned int l_1 = 0, l_2 = 0, prefix = 0, bytes = 0, j;
	
	while (*(s + l_1) != '\0' && *(accept + l_2) != '\0')
	{
		l_1++;
		l_2++;
	}
	j = 0;
	while (j < l_1 && j < l_2)
	{
		if (*(s + j) == *(accept + j))
		{
			prefix++;
		}
		break;
		j++;
	}
	return (bytes);
}
