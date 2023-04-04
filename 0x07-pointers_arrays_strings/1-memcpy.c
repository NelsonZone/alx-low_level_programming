#include "main.h"
/**
 * _memcpy- a function that copies memory area.
 * @dest:, where memory is stored
 * @scr: where memory  is been copied
 * @n: number of bytes
 * Return: a pointer value dest
 */

char *_memcpy(char *dest, char *scr, unsigned int n)
{
	int j = n;
	int i = 0;

	for (; i < j; ++i)
	{
		dest[i] = scr[i];
	}

	return (dest);
}
