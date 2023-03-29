#include "main.h"

/**
 * reverse_array - Reverses the contents of an array of integers.
 *
 * @a: Pointer to array of integers.
 * @n: Number of elements in the array.
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	n--;

	while ((a + n) - i > a + i)
	{
		temp = *((a + n) - i);
		*((a + n) - i) = *(a + i);
		*(a + i) = temp;
		i++;
	}
}
