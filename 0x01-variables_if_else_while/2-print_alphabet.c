#include <stdio.h>

/**
 * main - prints lowercase alphabet using putchar
 *
 * Return: 0 upon successful excecution
 */
int main(void)
{
	int a = 97;

	for (a; a < 123; a++)
	{
		putchar((char) a);
		putchar((char) 10);
	}

	return (0);
}
