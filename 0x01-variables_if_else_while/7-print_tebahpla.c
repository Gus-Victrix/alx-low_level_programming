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
	a--;

	if (a != 97)
		goto LABEL;
	putchar((char) 10);

	return (0);
}
