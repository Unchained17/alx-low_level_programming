#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - variadic function that prints numbers,
 * followed by a new line.
 * @separator: pointer to a array of chars
 * @n: number of integers passed to the function
 * @...: variable arguments list
 * Return: (void)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, num;

	va_start(ap, n);
	for (i = 0; i < n; i = i + 1)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
