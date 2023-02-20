#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * Main - if, else if, else
 *
 * if n is bigger than zero program prints value is positive
 * else if n is zero program prints value is zero
 * else if n is smaller than zero program prints value is negative
 *
 * Return: (0) success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n>0)
	{
		printf("%d is positive", n);
	}
	else if(n==0)
	{
		printf("%d is zero", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
