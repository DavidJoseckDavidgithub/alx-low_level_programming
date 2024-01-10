#include "main.h"
/**
 * _puts_recursion - print a string
 * @s:string
 * Return:void
 */
void _puts_recursion(char *s)
{
	// base case: if the string is empty, print a new line and return
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	// recursion case: ;print the first character and call the function on the rest of the string
	putchar('\n');
	_puts_recursion(s + 1);
}
