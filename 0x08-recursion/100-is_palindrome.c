#include "main.h"
#include <stddef.h>
#include <string.h>
int comp_(char*, int, int);
int str_len(char *);
/**
 * str_len - returns string length
 * @s: string
 * @n: length
 * Return: (n)
 */
int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + str_len(s + 1));
}
/**
 * is_palindrome -recursive function that returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: sitring / array of characters
 * Return: (1) || (0)
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (comp_(s, 0, str_len(s) - 1));
}
/**
 * comp_ - compares characters in string
 * @s: string
 * @i: start
 * @n: end
 * Return: (1) || (0)
 */
int comp_(char *s, int i, int n)
{
	if (i >= n)
	{
		return (1);
	}
	if (*(s + i) == *(s + n))
	{
		return (comp_(s, i + 1, n - 1));
	}
	return (0);
}
