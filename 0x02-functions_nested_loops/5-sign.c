#include "main.h"

/**
 * print_sign - Shows 1 if the input is a
 * letter Another cases, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for letters. 0 for the rest.
 */
int print_sign(int n)
{
	if ((n >= 97 && n <= 122) || (n >= 65 && n <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
