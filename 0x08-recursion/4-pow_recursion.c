#include "main.h"
#include <stddef.h>
/**
 * _pow_recursion - recursive function that returns the value of
 * x raised to the power of y.
 * @x: integer parameter
 * @y: integer variable
 * Return: (y * _pow_recursion(x, y))
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
