#include "main.h"

/**
 *  _strspn - count character coincidences with accept until no coincidences
 *  @s: string to review
 *  @accept: the characters to check
 *
 * Return: Returns counter
 */
unsigned int _strspn(char *s, char *accept)
{
	int index, index2, counter, cutter;


	counter = 0;
	for (index = 0; s[index] != '\0'; index++)
	{
		for (index2 = 0; accept[index2] != '\0'; index2++)
		{
			cutter = counter;
			if (s[index] == accept[index2])
			{
				counter++;
				break;
			}
		}
		if (counter == cutter)
			break;
	}
	return (counter);
}
