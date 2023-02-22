#include "main.h"
/**
 * print_alphabet_x10-prints lower case alphabets in lowercase
 */
void print_alphabet_x10(void)
{
	int counter = 0;
	char lower;

	while (counter < 10)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			_putchar(lower);
		}
		_putchar('\n');
		counter++;
	}
}
