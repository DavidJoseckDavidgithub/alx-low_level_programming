#include <stdio.h>
/**
 * main - print first 50 fibonacci nos
 * Return: 0 suceess
 */
int main(void)
{
	int counter;
	unsigned long fibonaci1 = 0, fibonaci2 = 1, sum;

	for (counter = 0; counter <= 49; counter++)
	{
		sum = fibonaci1 + fibonaci2;
		printf("%lu", sum);
		fibonaci1 = fibonaci2;
		fibonaci2  = sum;
		if (counter == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
