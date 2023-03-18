#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - describes the sign of the variable in n
 *
 * Return: 0 for it is an int type function
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
