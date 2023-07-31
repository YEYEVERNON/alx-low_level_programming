#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string programs
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
		char datarot[] = "ZXYQTPCBVWSUDLOREMJAFHGINKfzrehmklstywxqujdbacgpnvio";
		for (i = 0; s[i] != '\n'; i++)
		{
			for (j = 0; j < 52; j++)
			{
				if (s[i] == data1[j])
				{
					s[1] = datarot[j];
					break;
				}
			}
		}
		return (s);
}