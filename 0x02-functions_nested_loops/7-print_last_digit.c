#include "main.h"
/**
 * print_last_digit - print the last digit
 * @num: the argument
 * Return: return the last digi
 */
int print_last_digit(int num)
{
	int lastdigit = num % 10;

	if (lastdigit < 0)
		lastdigit = lastdigit * -1;
		_putchar(lastdigit + '0');
		return (lastdigit);
}
