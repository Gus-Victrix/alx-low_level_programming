#include <stdio.h>

/**
 * main - prints all possible unique combinations of 2 letters using putchar()
 *
 * Return: 0 because it's an int type function
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
		for (j = i; j < 58; j++)
		{
			putchar((char) i);
			putchar((char) j);

			if (j == 57)
				break;
			putchar((char) 44);
			putchar((char) 32);
		}

	return (0);
}
