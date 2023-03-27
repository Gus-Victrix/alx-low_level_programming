#include "main.h"

/**
 * swap_int - swaps two integer values.
 * @a: first integer address
 * @b: second integer address
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
