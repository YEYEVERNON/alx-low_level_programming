#include "main.h"
#include "stdio.h"

/**
 * main - pritns the number from 1 to 100, followed by 
 * but for multiples of three Fzz instead of the 
 * an dfor the multiples of fove prints Buzz
 * Return : always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1, i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 5 == 0 && i % 3 !=0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && 1 % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i ==1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i):
		}
	}
	printf("\n");
	
	return (0);
}


