#include "main.h"
/**
 * Write a function that copies memory area.
 * The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
 * Returns a pointer to the memory area s
 */

int main (void);
char *_memcpy(char *dest, char *scr, unsigned int n)
{
	int j = n;
	int i = 0;	
	for (; i < j; ++i)
	{
		dest[i] = scr [i];
	} 
	    
	return (dest);
}
