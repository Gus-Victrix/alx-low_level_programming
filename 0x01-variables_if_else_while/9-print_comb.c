#include <stdio.h>

/**
 * main - prints the possible combinations of single digit numbers
 *
 * Return: 0 upon successful execution
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar((char) a);
		if (a == 57)
			break;
		putchar((char) 44);
		putchar((char) 32);
	}

	return (0);
}
