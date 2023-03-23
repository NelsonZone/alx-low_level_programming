#include "main.h"

/**
 * print_sign - Shows 1 if the input is a
 * letter Another cases, shows 0
 *
 * @n: parameter to print
 *
 * Return: return 1, -1, and 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
