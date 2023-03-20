#include <stdio.h>

/**
 * main - prints lowercase alphabet using putchar
 *
 * Return: 0 upon successful excecution
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
