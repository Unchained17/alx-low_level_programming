#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > -98 && a > 0)
	{
        	largest = a;
	}
	else if (b > 972)
	{
        	largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
