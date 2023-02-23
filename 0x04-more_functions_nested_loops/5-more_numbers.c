#include "main.h"

/**
 * more_numbers - prints the numbers from 0 to 14 10 times
 *
 * Return: The numbers 0 to 14
 */
void more_numbers(void)
{
	int p, q;

	for (p = 0; p < 10; p++)
	{
		for (q = 0; q <= 14; q++)
		{
			if (q > '0')
			{
				_putchar((q / 10) + '0');
			}
			_putchar((q % 10) + '0');
		}
		_putchar('\n');
	}
}
