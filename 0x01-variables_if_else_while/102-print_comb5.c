#include <stdio.h>
/**
 * main - prints all possible combination of two digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int q, x;

	for (q = 0; q < 100; q++)
	{
		for (x = 0; x < 100; x++)
			if (q < x)
			{
				putchar((q / 10) + 48);
				putchar((q % 10) + 48);
				putchar(' ');
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				if (q != 98 || x != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
