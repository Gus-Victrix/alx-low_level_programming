#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements of an array.
 *
 * @a: Array input.
 * @n: number of elements to print.
 */

void print_array(int *a, int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		printf("%d", a[counter]);
		if (counter != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
