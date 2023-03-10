#include "main.h"

/**
 * _strncpy - copy a string limited to n places
 *
 * @dest: string to concatenate
 * @src: to concatenate string
 * @n: byte limiter
 * Return: array pointer dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && *(src + index) != '\0'; index++)
	{
		*(dest + index) = *(src + index);
	}
	while (index < n)
	{
		*(dest + index) = '\0';
		index++;
	}
	return (dest);
}
