#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\n')
	{
		longi++;
		s++;
	}
	return (longi);
}
