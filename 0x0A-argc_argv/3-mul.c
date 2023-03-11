#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - function that multiplies two numbers.
 * @argc: argument count
 * @argv: one dimensional array
 * Return: (0)
 */
int main(int argc, char **argv)
{
	int i;
	int result = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			result = result * strtol(argv[i], NULL, 10);
		}
	printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
