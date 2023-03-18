#include <stdio.h>

/**
 * main - prints all unique combinations of 3 numbers using putchar
 *
 * Return: it returns 0 because it is an int type function
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a < 58; a++)
		for (b = a; b < 58; b++)
			for (c = b; c < 58; c++)
			{
				putchar((char) a);
				putchar((char) b);
				putchar((char) c);

				if (a == 57)
					break;
				putchar((char) 44);
				putchar((char) 32);
			}
	return (0);
}
