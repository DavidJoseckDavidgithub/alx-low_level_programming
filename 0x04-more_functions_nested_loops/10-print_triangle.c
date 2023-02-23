#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 *  @size : integer type
 *  Return: empty
 */
void print_triangle(int size)
{
	int i = 1, ii;

	while (i <= size && size > 0)
	{
		ii = 0;
		while (ii < size - i)
		{
			_putchar(' ');
			ii++;
		}
		ii = 0;
		while (ii < i)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		ii++;
	}
	if (i == 1)
		_putchar('\n');
}
