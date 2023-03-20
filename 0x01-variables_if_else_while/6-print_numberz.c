#include <stdio.h>

/**
 * main - prints base ten digits
 *
 * Return: 0 because its an int type function
 */
int main(void)
{
	int a = 48;

PRINT_LOOP:
	putchar((char) a);
	a++;
	if (a < 58)
		goto PRINT_LOOP;
	putchar((char) 10);

	return (0);
}
