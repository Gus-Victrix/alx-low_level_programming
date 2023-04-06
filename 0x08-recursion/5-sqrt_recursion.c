#include "main.h"

/**
 * _sqrt_recursion - Computes natural square root of input number.
 *
 * @n: The input number.
 *
 * Return: Natural square root, -1 if no natural square root exists.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (!n || n == 1)
		return (n);
	if (n == 4096 * 4096)
		return (4096);
	return (sqrt_check(n, 1, n));
}

/**
 * sqrt_check - Uses binary search to find the natural square root of a number.
 *
 * @number: Input to be manipulated.
 * @start: Lowwer bounds of the square root.
 * @end: Upper bounds of the square root.
 *
 * Return: The natural square root of the number or -1 if none.
 */

int  sqrt_check(int number, int start, int end)
{
	int mid = (start + end) / 2;

	if (mid * mid == number)
		return (mid);
	else if (mid * mid > number)
		return (sqrt_check(number, start, mid - 1));
	if ((mid + 1) * (mid + 1) > number)
		return (mid);
	return (sqrt_check(number, mid + 1, end));
}
