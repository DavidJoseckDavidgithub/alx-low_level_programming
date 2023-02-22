#include "main.h"
/**
 * _abs - prints the absolute value
 * @c: the argument
 * Return: c  sucess
 */
int _abs(int c)
{
	if (c < 0)
	{
		c *= -1;
	}
	else
	{
		c = c;
	}
	return (c);
}
