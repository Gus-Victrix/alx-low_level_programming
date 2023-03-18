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
	putchar('\n');
	a++;
	if (a < 57) goto PRINT_LOOP;

	return (0);
}
