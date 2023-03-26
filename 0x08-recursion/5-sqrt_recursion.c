#include "main.h"
#include <stddef.h>
#include <stdlib.h>
int _sqrt_(int, int);
/**
 * _sqrt_ - recursive function that calculates the
 * natural square root of a number.
 * @x: number argument
 * @y: square root
 * Return: (_sqrt_recursion(n, 1))
 */
int _sqrt_(int x, int y)
{
	if ((y * y) == x)
	{
		return (y);
	}
	else if ((y * y) > x)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_(x, y + 1));
	}
}
/**
 * _sqrt_recursion - recursive function that returns the
 * natural square root of a number.
 * @n: called argument
 * Return: (_sqrt_recursion(n, 1))
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_(n, 0));
	}
}
