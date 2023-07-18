#include <stdio.h>
/**
 * main - print_putchar
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int i;
	char c[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');

	return (0);

}
