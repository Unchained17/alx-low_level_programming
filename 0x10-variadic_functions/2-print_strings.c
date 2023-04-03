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
	char *s;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (i != (n - 1) && *separator != '\0')
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
