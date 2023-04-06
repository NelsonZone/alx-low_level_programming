#include "main.h"

/**
 * _strlen_recursion - function that return length of a string
 * @s: length of string
 *Return: return result
 */

int _strlen_recursion(char *s)
{
	int light = 0;

	if (*s)
	{
		light++;
		light += _strlen_recursion(s + 1);
	}
	return (light);
}
