#include "main.h"

/**
 * Print_line - draws a straight line in the terminal
 * @n: number of times the straight character - should b eprinted
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

