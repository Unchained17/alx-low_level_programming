#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - Prints reslut of sample operations.
 * @argc: number of arguments.
 * @argv: array of pointers to the arguments.
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int num_1, num_2;
	char *po;

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	num_1 = atoi(argv[1]);
	po = argv[2];
	num_2 = atoi(argv[3]);
	if ((get_op_func(po) == 0) || (po[1] != 0))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*po == '/' && num_2 == 0) || (*po == '%' && num_2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(po)(num_1, num_2));
	return (0);
}
