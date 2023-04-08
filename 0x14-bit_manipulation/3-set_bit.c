#include "main.h"

/**
 * set_bit - sets the value of a bit to 1. at a given index
 * @index: index of the bit.
 * @n: pointer of an unsigned long int.
 * Return: 1 on success, -1 on filure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int r;

if (index > 63)
return (-1);

r = 1 << index;
*n = (*n | r);

return (1);
}
