#include <stdio.h>

/**
 * main - prints alphabet paired caps and lowercase using putchar
 *
 * Return: 0 upon successful excecution
 */
int main(void)
{
	int a = 97;
	int b = 65;
	int i;

	for(i = 0; i < 26; i++)
	{
		putchar((char) a);
		putchar((char) b);
		putchar((char) 10);
		a++;
		b++;
	}

	return (0);
}
