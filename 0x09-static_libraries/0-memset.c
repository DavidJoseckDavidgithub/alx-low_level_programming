#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the address of memory to print
 * @b: the byte to write
 * @n: the number of spaces to write
 * Return: Returns value to memory area S
 */

char *_memset(char *s, char b, unsigned int n)
{
	int index;

	for (index = 0; n > 0; n--)
	{
		*(s + index) = (b + 0);
		index++;
	}
	return (s);
}
