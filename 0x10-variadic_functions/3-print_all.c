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
	char *sep = "", *string;
	int j = 0;

	va_start(args, format);
	while (format[j] != '\0' && format != NULL)
	{
		switch (format[j])
		{
			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
					printf("(nil)");
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
		if (format[j + 1])
			printf(", ");
		j = j + 1;
	}
	printf("\n");
	va_end(args);
}
