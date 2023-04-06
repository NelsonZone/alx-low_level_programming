#include "main.h"

/**
 * _puts_recursion - a function that print a string followed by /n
 * @s: the string to be print
 * Return: Always (0)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}

