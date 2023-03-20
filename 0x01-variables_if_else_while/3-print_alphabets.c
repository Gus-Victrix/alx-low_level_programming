#include <stdio.h>

/**
 * main - prints alphabet paired caps and lowercase using putchar
 *
 * Return: 0 upon successful excecution
 */
int main(void)
{
	int a = 97;

	for (a = 97; a != 91; a++)
	{
		if (a == 123)
			a = 65;
		putchar((char) a);
	}
	putchar((char) 10);

	return (0);
}
