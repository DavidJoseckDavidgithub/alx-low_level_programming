#include "main.h"

/**
 * get_endianness - checks endianness.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
unsigned int w;
char *a;

w = 1;
a = (char *) &w;

return ((int)*a);
}
