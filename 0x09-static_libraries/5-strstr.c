#include "main.h"
#include <stdio.h>

/**
 * _strstr - returns the first substring coincidence.
 * @haystack: string where you are looking for 
 * @needle: subtring to find
 *
 * Return: Always 0.
 */

#include <stdio.h>

char *_strstr(char *haystack, char *needle)
{
	int index2;
	int counter;

	if (needle[0] != '\0')
	{
		counter = 0;
		for (index2 = 0; haystack[index2] != '\0'; index2++)
		{
			if (needle[counter] == haystack[index2])
			{
				if (needle[counter + 1] == '\0')
					return (&haystack[index2 - counter]);
				counter += 1;
			}
			else
				counter = 0;
		}
	}
	else
		return (haystack);
	return (NULL);
}
