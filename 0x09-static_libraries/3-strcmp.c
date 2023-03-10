#include "main.h"

/**
 * _strcmp - compare two strings and return the ascii difference of
 * the first difference, if not returns 0
 *
 * @s1: string to compare
 * @s2: the comparison
 * Return: zero at match
 */

int _strcmp(char *s1, char *s2)
{
	int index;
	int cmp = 0;

	for (index = 0; *(s1 + index) != '\0'; index++)
	{
		if (*(s1 + index) != *(s2 + index))
		{
			cmp = (*(s1 + index) - *(s2 + index));
			break;
		}
	}
	return (cmp);
}
