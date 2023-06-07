#include "main.h"

/**
 * nat_sq - Checks the natural square root of a number.
 *
 * @n: Number to be checked.
 * @start: Lowwer bound of the sqrt.
 * @end: Upper bound of the sqrt.
 * @count: Number of iterations completed.
 *
 * Return: Natural square root of a number.
 */

int nat_sq(int n, int start, int end, int count)
{
	int mid;

	mid = (start + end) / 2;
	if (count > 18)
		return (-1);

	if (mid * mid > n)
		return (nat_sq(n, start, mid, count + 1));
	if (mid * mid == n)
		return (mid);
	return (nat_sq(n, mid, end, count + 1));
}

/**
 * _sqrt_recursion - Returns the natural sqroot of a number.
 *
 * @n: The number who's sqrt is to be calculated.
 *
 * Return: Natural sqrt of a number, -1 otherwise.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (nat_sq(n, 0, n, 1));
}
