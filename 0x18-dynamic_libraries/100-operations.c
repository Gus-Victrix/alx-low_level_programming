#include "main.h"

int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mul(int a, int b)
{
	return (a * b);
}

int div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}

int mod(int a, int b)
{
	int sign = 1;
	if (a < 0)
	{
		a *= -1;
		sign *= -1;
	}
	if (b < 0)
	{
		b *= -1;
	}
	return ((a % b) * sign);
}
