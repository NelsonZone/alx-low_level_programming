#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that locate a char in a strin
 * @c: is the character to be located
 * @s: is the string
 * Return: a pointer to first occurence of c
 * NULL is return if char is not found
 */

char *_strchr(char *s, char c)
{
	int len;

	for (len = 0 ; s[len] >= '\0'; len++)
	{
		if (s[len] == c)
			return (&s[len]);
	}

	return (NULL);
}
