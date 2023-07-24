#include "main.h"

/**
 * print_array - Prints n elements of an array.
 * @a: Pointer to the array whose elements are to be printed.
 * @n: Number of elements of the array to be printed.
 */
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < (n - 1); i++)
    {
        printf("%d, ", a[i]);
    }

    if (n > 0) // Check if there is at least one element in the array
    {
        printf("%d", a[n - 1]);
    }

    printf("\n");
}

