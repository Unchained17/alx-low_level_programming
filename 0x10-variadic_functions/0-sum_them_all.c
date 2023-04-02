#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - varargs(variadic) function that returns the sum of all its parameters.
 * @n: number of parameters
 * @...: A variable number of parameters
 * Return: (sum)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list xp;
	unsigned int j, sum;

	va_start(xp, n);
	j = 0;
	while (j != n)
	{
		sum += va_arg(xp, int);
		j = j + 1;
	}
	if (n == 0)
		return (0);
	va_end(xp);
	return (sum);
}
