#include "3-calc.h"

/**
 * op_add - Adds up two integer inputs.
 *
 * @a: First integer input.
 * @b: Second integer input.
 *
 * Return: Sum of the two integer inputs.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts second integer input from first integer input.
 *
 * @a: First integer input.
 * @b: Second integer input.
 *
 * Return: Difference of the two inputs.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies the two integer inputs.
 *
 * @a: First integer input.
 * @b: Second integer input.
 *
 * Return: Product of input integers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Performs integral division on two inputs.
 *
 * @a: Divisor.
 * @b: Dividend.
 *
 * Return: Quotient of the division.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Performs integral division on two inputs.
 *
 * @a: Divisor.
 * @b: Dividend.
 *
 * Return: Remainder of the integer division.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
