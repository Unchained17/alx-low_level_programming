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
	int i, n;

	n = 100;
	for (i = 1; i <= n; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 5) == 0 && (i % 3) == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (n > 0 && i < n)
			printf(" ");
	}
	printf("\n");
	return (0);
}
