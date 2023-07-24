#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The input string
 */
void puts2(char *str)
{
	int length = 0;
	int i;

	/* Calculate the length of the input string */
	while (str[length] != '\0')
		length++;

	/* Print every other character starting from the first one */
	for (i = 0; i < length; i += 2)
		putchar(str[i]);

	putchar('\n');
}

