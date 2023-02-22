#include "main.h"
/**
 * times_table - function that prints 9 times table
 * Return: Always 0
 */
void times_table(void)
{
	int a, b, k;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			k = a * b;
			_putchar(44);
			_putchar(32);
			if (k <= 9)
			{
				_putchar(32);
				_putchar(k + 48);
			}
			else
			{
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
