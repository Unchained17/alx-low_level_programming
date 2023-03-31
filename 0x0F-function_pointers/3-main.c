#include <stdio.h>
#include "function_pointers.h"
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
	char *p;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num_1 = atoi(argv[1]);
	p = argv[2];
	num_2 = atoi(argv[3]);
	if ((get_op_func(p) == 0) || (p[1] != 0))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*p == '/' && num_2 == 0) || (*p == '%' && num_2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(p)(num_1, num_2));
	return (0);
}
