#include <stdio.h>

/**
 * main - Print the first 50 Fibonacci numbers.
 *
 * Return: 0 (succes).
 */
int main(void)
{
	long n1 = 1, n2 = 2, sum = 2, n3;

	while (n3 < 4000000)
	{
		n3 = n1 + n2;
		if (n3 % 2 == 0)
		{
			sum += n3;
		}
		n1 = n2;
		n2 = n3;
	}
	printf("%li\n", sum);
	return (0);
}
