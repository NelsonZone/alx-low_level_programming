#include <unistd.h>

/**
 *main-Entrypoint 
 * Description: print a quote using write function
 * write(int fd,const void *buf,size_t count)
 *
 * Return: 1
 */

int main(void)

{ char quo[] = "and that piece of art is useful\"-Dora Korpar, 2015-10-19\n";
	Write(1, quo, 59);
	Return(1)
}
