#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the diagonal elements of input array
 *
 * @a: pointer to a multidimenstional ineger array
 * @size: size of second dimension of the array.
 */

void print_diagsums(int *a, int size)
{
	int lead = 0, inferior = 0, i;
	int (*b)[size] = (int (*)[size])a;

	for (i = 0; i < size; i++)
	{
		lead += b[i][i];
		inferior += b[size - i - 1][i];
	}

	printf("%d, %d\n", lead, inferior);
}
