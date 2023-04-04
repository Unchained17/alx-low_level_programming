#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - variadic function that prints anything.
 * @format: list of all arguments 'passed'
 * @...: variable number of arguments
 * Return: (void)
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *sep, *string;
	unsigned int j;

	va_start(args, format);
	sep = "";
	j = 0;
	while (format[j] && format)
	{
		switch (format[j])
		{
			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
				{
					printf("(nil)");
				}
				printf("%s%s", sep, string);
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			default:
				j++;
				continue;
		}
		sep = ", ";
		j = j + 1;
	}
	printf("\n");
	va_end(args);
}
