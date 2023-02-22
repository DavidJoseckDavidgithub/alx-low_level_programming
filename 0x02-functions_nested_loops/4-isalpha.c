#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * @c: character
 * Return: 0 if failed and 1 else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
