#include <stdio.h>

/**
 * main - prints characters of hexadecimal in lowercase using putchar
 *
 * Return: 0 because it is an integer type function
 */
int main(void)
{
	int a = 47;

	do {
		a++;
		if ((a > 57) && (a < 97))
			a = 97;
		putchar((char) a);
	} while (a < 102);
	putchar((char) 10);

	return (0);
}
