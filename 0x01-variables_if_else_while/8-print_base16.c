#include <stdio.h>

/**
 * main - prints characters of hexadecimal in lowercase using putchar
 *
 * Return: 0 because it is an integer type function
 */
int main(void)
{
	int a = 47;

	do{
		a++;
		if ((a > 57) && (a < 97))
			a = 97;
		putchar((char) a);
		putchar((char) 10);
	}while (a < 102)

	return (0);
}
