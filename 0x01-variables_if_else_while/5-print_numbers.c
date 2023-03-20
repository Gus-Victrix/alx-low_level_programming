#include <stdio.h>

/**
 * main - prints base ten characters using printf
 *
 * Return: 0 upon exit
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		printf("%d", a);
	putchar('\n');

	return (0);
}
