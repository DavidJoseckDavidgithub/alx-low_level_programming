#include "main.h"

/**
 * _strncat - prints a concatenated strings limiting
 * the second string by n bytes
 *
 * @dest: string to concatenate
 * @src: to concatenate string
 * @n: byte limiter
 * Return: array pointer dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index;
	int index2;
	char strpiler[50];


	for (index = 0; *(dest + index) != '\0'; index++)
	{
		*(strpiler + index) = *(dest + index);
	}
	for (index2 = 0; index2 < n && *(src + index2) != '\0'; index2++)
	{
		*(strpiler + index) = *(src + index2);
		index++;
	}
	*(strpiler + index) = '\0';
	for (index = 0; *(strpiler + index) != '\0'; index++)
	{
		*(dest + index) = *(strpiler + index);
	}
	*(dest + index) = *(strpiler + index);
	return (dest);
}

