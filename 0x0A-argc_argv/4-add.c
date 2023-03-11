#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers.
 * @argc: argument count
 * @argv: vector
 * Return: (0)
 */
int main(int argc, char **argv)
{
	int i, x, sum = 0;
	char *p;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; argv[i]; i++)
	{
		x = strtol(argv[i], &p, 10);
		if (*p)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
