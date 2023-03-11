#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that prints the minimum number of coins,
 *to make change for an amount of money.
 * @argc: argument count
 * @argv: one dimensional array
 * Return: (0)
 */
int main(int argc, char **argv)
{
	int n_m, i, t_t = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n_m = atoi(argv[1]);
	if (n_m < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && n_m >= 0; i++)
	{
		while (n_m >= cents[i])
		{
			n_m -= cents[i];
			t_t++;
		}
	}
	printf("%d\n", t_t);
	return (0);
}
