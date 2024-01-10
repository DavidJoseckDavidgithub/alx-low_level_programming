#include "main.h"
/**
 * _puts_recursion - print a string
 * @s:string
 * *s:pointer to astring
 * Return:void
 */
void _puts_recursion(char *s)
{
// base case: if the string is empty, print a new line and return
if (*s == '\0')
{
	_putchar('\n');
	return;
}
// recursive case: print the first line and call the function on the rest of the string
_putchar(*s);
_puts_recursion(s + 1);
}
