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
	int lead = 0, inferior = 0, row;

	for (row = 0; row < size; row++)
	{
		lead += *((row * size) + row);
		inferior += *((row * size) + size - 1 - row);
	}

	printf("%d, %d\n", lead, inferior);
}
