#include <stdio.h>

/**
 * main - prints the alphabet in lowwercase using putchar
 *
 * Return: 0 after successful execution
 */
int main(void)
{
	int a = 97;

	for (a = 97; a <= 122; a++)
	{
		if ((a == 113) || (a == 101))
			continue;
		putchar((char) a);
	}
	putchar((char) 10);

	return (0);
}
