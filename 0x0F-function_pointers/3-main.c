#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - Prints reslut of sample operations.
 * @argc: number of arguments
 * @argv: Vector/one-dimensional-array
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *po;

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	po = argv[2];
	num2 = atoi(argv[3]);
	if ((get_op_func(po) == 0) || (po[1] != 0))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*po == '/' && num2 == 0) || (*po == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(po)(num1, num2));
	return (0);
}
