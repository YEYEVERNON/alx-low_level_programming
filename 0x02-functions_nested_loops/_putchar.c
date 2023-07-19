#include <unistd.h>

/**
 * _putchar - writes the charactwr c to stdout
 * Description : Char to print
 * Return : Always 1
 * On error return : -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
