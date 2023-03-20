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
	int k;

	for (i = 48; i < 57; i++)
		for (j = i + 1; j < 58; j++)
			for (k = j + 1; k < 58; k++)
			{
				putchar((char) i);
				putchar((char) j);
				putchar((char) k);
				if ((i == 55) && (j == 56) && (k == 57))
				{
					putchar('\n');
					break;
				}
				putchar((char) 44);
				putchar((char) 32);
			}

	return (0);
}
