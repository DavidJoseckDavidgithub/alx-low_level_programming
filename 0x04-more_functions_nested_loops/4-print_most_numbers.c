#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 with exception of 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		_putchar(n + '0');
	}
	_putchar('\n');
}
