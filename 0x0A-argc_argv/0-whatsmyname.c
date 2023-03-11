#include "main.h"
#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line.
 * If you rename the program, it will print the new name,
 * without having to compile it again
 * @argv: an array of pointers to the strings which are,
 * those arguments- (type) is (almost) ‘array of pointer to char’.
 * @argc: a count of the arguments supplied to the program.
 * Return: (0)
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
