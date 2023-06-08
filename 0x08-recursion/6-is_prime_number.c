#include "main.h"

/**
 * optimized_prime - Finds primes above 5.
 *
 * @n: Number to be checked if prime.
 * @i: Current test value.
 *
 * Return: 1 if prime, 0 otherwise.
 */

int optimized_prime(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0 || n % (i + 2) == 0)
		return (0);
	return (optimized_prime(n, i + 6));
}

/**
 * is_prime_number - Checks if input number is prime or not.
 *
 * @n: Number to be checked.
 *
 * Return: 1 if prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n == 2 || n == 3)
		return (1);
	if (n < 2 || n % 2 || n % 3)
		return (0);
	return (optimized_prime(n, 5));
}
