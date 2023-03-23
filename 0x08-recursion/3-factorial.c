#include "main.h"
/**
 * factorial - recursive function that returns the factorial of a given number.
 * @n: integer variable
 * Return: (n * factorial(n - 1))
 */
int factorial(int n)
{
	if (n == '\0')
	{
		return (1);
	}
	else if (n < 0)
	{
		return(-1);
	}
	else
		return n * factorial(n - 1);
}
