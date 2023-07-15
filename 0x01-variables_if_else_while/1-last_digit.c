#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main Prints a text according to number
 * Return : Always (Success)
 *
 */

int main(void)
{
	int n;
       	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	if (lastd > 5)
	{
		printf("last digit of %d is %d and is greater than 5", n,lastd);
	}
	else if (lasted == 0)
	{
		printf("last digit of %d is %d and is 0", n, lastd);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0", n, lastd);
	}
	return (0);
}
