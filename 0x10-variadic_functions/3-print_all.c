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
	char *string;
	int j = 0;

	va_start(args, format);
	while (*(format + j) != '\0')
	{
		switch (*(format + j))
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
					printf("(nil)");
				printf("%s", string);
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
		}
		if (*(format + (j + 1)) != '\0' && j != 0)
			printf(", ");
		j += 1;
	}
	printf("\n");
	va_end(args);
}
