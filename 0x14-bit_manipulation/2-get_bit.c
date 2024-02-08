#include "main.h"

/**
 * get_bit - returns gthe value of a bit to a given index.
 * @index: index of the bit.
 * @n: unsigned lont int input.
 * Return: value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;

if (n == 0 && index < 64)
return (0);

for (i = 0; i <= 63; n >>= 1, i++)
{
if (index == i)
{
return (n & 1);
}
}
return (-1);
}
