#include <stdio.h>
/**
 * main - return sum of een fibonacci
 * Return: 0.
 */
int main(void)
{
	long int fib1, fib2, sum, finalsum;

	fib1 = 1;
	fib2 = 2;
	sum = finalsum = 0;
	while (sum <= 4000000)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
		if ((fib1 % 2) == 0)
		{
			finalsum += fib1;
		}
	}
	printf("%ld\n", finalsum);
	return (0);
}
