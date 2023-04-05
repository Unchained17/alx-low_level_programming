#include "main.h"
#include <stdio.h>
/**
 * main - function that prints the numbers from 1 to 100, followed by new line.
 * for multiples of three print Fizz.
 * for the multiples of five print Buzz.
 * for multiples of both three and five print FizzBuzz.
 * Return: (0)
 */
int main(void)
{
	int i = 1, n;

	n = 100;
	while (i <= n)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i > 0 && i < n)
		{
			printf(" ");
		}
		i += 1;
	}
	printf("\n");
	return (0);
}
