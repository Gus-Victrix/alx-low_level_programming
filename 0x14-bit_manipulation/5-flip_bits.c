#include "main.h"

/**
* flip_bits - Calculate how many bit are differents between 2 numbers
*
* @n: Number 1
* @m: Number 2
*
* Return: The difference.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int n1, n2, sum = 0;

	while (n > 0 || m > 0)
	{
		n1 = n & 1;
		n2 = m & 1;
		if (n1 != n2)
			sum++;
		n >>= 1;
		m >>= 1;
	}
	return (sum);
}
