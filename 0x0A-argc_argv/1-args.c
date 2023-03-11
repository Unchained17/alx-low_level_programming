#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - function, program that prints the number of arguments,
 * passed into it.
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings which are those arguments,
 * whose type is simmilar to ‘array of pointer to char’
 * Return: (0)
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
