#include "main.h"

/**
 * clear_bit - sets value of a bit to 0. at agiven index.
 * @index: index of a bit.
 * @n: pointer to unsigned long int.
 * Return: 1 on success, -1 on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int r;

if (index > 63)
return (-1);

r = 1 << index;

if (*n & r)
*n ^= r;
return (1);
}
