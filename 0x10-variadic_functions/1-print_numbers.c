#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - variadic function that prints numbers,
 * followed by a new line.
 * @separator: pointer to a array of chars
 * @n: number of integers passed to the function
 * @...: variable number of arguments
 * Return: (void)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i += 1)
	{
		printf("%d", va_arg(ap, int));
		if (i == n - 1)
			break;
		printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
