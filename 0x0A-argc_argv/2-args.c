#include <stdio.h>
#include "main.h"
/**
 * main - function, program that prints all arguments it receives.
 * @argc: count of the arguments supplied to the program.
 * @argv: (almost) ‘array of pointer to char’
 * Return: (0)
 */
int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
