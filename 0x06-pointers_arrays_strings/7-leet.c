#include "main.h"
#include <stdio.h>

/**
 * Leet - a function that encodes a string into 1337
 * @str - Set of strings to be encoded
 *
 * Return: Encoded string
 */
char *leet(char *str)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char d[] = "4433007711";

	for (i = 0; str[i] != '\0'; j++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				if (str[i] == c[j])
				{
					str[i] = d[j];
				}
			}
		}
		return (str);
	}
}
