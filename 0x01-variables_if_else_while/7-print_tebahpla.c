#include <stdio.h>

/**
 * main - prints the alphabet in lowercase in descending order
 *
 * Return: 0 after successful execution
 */
int main(void)
{
	int a = 122;

LABEL:
	putchar((char) a);
	putchar((char) 10);
	a--;

	if( a > 96)
		goto LABEL;

	return (0);
}
