#include "main.h"

/**
 * print_sign - Shows 1 if the input is a
 * letter Another cases, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for letters. 0 for the rest.
 */
int print_sign(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
