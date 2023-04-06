#include "main.h"

/**
 * is_prime_number - Checks if input integer is a prime number or not.
 *
 * @n: Integer input.
 *
 * Return: 1 if prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (prime_check(n, 2));
}

/**
 * prime_check - Checks if input integer input is an integer.
 *
 * @number: Number to be checked.
 * @quotient: Counter to be divided
 *
 * Return: 1 if prime, else returns 0.
 */

int prime_check(int number, int quotient)
{
	if (number <= quotient)
		return (1);
	if (number % quotient == 0)
		return (0);
	return (prime_check(number, quotient + 1));
}
