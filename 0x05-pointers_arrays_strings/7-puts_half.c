#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string
 * Return: length
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\')
	{
		j++;
	}

	for (i = 0; i < j; i +=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
