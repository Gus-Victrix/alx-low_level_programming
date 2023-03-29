#include "main.h"

/**
 * infinite_add - Add 2 inputed number into string with a limit
 * size on the output
 *
 * @n1: First number
 * @n2: Second number
 * @r: Output array
 * @size_r: Size of the output array
 *
 * Return: 0 if there is a problem, else the sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1l, n2l, i, sum, tmp, j, carry = 0;

	for (n1l = 0; n1[n1l]; n1l++)
		;
	for (n2l = 0; n2[n2l]; n2l++)
		;
	if (n1l > size_r || n2l > size_r)
		return (0);
	for (n1l -= 1, n2l -= 1, i = 0; i < size_r - 1; n1l--, n2l--, i++)
	{
		sum = carry;
		if (n1l >= 0)
			sum += n1[n1l] - '0';
		if (n2l >= 0)
			sum += n2[n2l] - '0';
		if (n1l < 0 && n2l < 0 && sum == 0)
			break;

		carry = sum / 10;
		r[i] = sum % 10 + '0';
	}
	r[i] = '\0';
	if (n1l >= 0 || n2l >= 0 || carry)
		return (0);
	for (i -= 1, j = 0; j < i; i--, j++)
	{
		tmp = r[i];
		r[i] = r[j];
		r[j] = tmp;
	}
	return (r);
}

