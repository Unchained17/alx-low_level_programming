#include <stddef.h>
#include "main.h"
int _prime_(int, int);
/**
 * is_prime_number - calling function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: number
 * Return: (_prime(n, 2))
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime_(n, 2));
}
/**
 * _prime_ - checks for prime number
 * @n: number
 * @i: iterator
 * Return (0) || (1)
 */
int _prime_(int n, int i)
{
	if (n <= 2)
	{
		return (1);
	}
	if ((n % i) == 0)
	{
		return (0);
	}
	if ((i * i) > n)
	{
		return (1);
	}
	return _prime_(n, i + 1);
}
