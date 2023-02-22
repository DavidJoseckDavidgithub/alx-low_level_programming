#include "main.h"
/**
 * jack_bauer - function that prints the 24hrs of the day
 *
 * Return: always 0
 */

void jack_bauer(void)
{
	int r;
	int c;

	for (r = 0; r < 24; r++)
	{
		for (c = 0; c < 60; c++)
		{
			_putchar(r / 10 + '0');
			_putchar(r % 10 + '0');
			_putchar(':');
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
			_putchar('\n');
		}
	}
}

