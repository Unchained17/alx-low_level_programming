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
	unsigned int j, k, val, chk;

	val = 0;
	j = 0;
	for (; s[j] != '\0'; j++)
	{
		chk = 0;
		k = 0;
		for (; accept[k] != '\0'; k++)
		{
			if (accept[k] == s[j])
			{
				val++;
				chk = 1;
			}
		}
		if (chk == 0)
			return (-1);
	}
	return (s[j] - accept[k]);
}
