#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Entry point
 * Return:Always return 0 (Success)
 */
int main(void)
{
	int n;

	int la_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	la_d = n % 10;
	if (la_d > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, la_d);
	if (la_d == 0)
		printf("Last digit of %d is %d and is 0\n", n, la_d);
	if (la_d < 6 && la_d != 0)
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, la_d);
	return (0);

}
