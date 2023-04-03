#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - variadic function that prints strings
 * followed by a new line.
 * @separator: string in between strings
 * @n: number of strings to be printed
 * Return: (void)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *str;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);
		printf("%s", str);
		if (i != (n - 1) && *separator != '\0')
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
