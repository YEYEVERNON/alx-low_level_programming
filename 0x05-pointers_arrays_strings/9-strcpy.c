#include "main.h"

/**
 * print_array - Prints n elements of an array.
 * @a: Pointer to the array whose elements are to be printed.
 * @n: Number of elements of the array to be printed.
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
