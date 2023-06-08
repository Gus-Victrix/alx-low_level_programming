#include "main.h"

/**
 * newton_raphson_sqrt - Uses Newton-Raphson method to compute natural sqrt.
 *
 * @n: Number whose sqrt is to be computed.
 * @x0: The current sqrt guess.
 *
 * Return: The natural square root of the number.
 */

double newton_raphson_sqrt(double n, double x0)
{
	double x = 0.5 * (x0 + (n / x0));

	if (x == x0 || (int)x == (int)x0)
		return (x);
	else
		return (newton_raphson_sqrt(n, x0 + 1));
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
	return ((int)newton_raphson_sqrt((double)n, 1));
}
