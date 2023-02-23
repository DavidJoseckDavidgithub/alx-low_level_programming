#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 with exception of 2 and 4
 *
 * Return: The numbers 0 to 9
 */
void print_most_numbers(void)
{
	int n = 0;

	for (; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
