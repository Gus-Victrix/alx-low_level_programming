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
			if (i == 57)
			{
				putchar((char) 10);
				break;
			}
			putchar((char) i);
			putchar((char) j);
			putchar((char) 44);
			putchar((char) 32);
		}

	return (0);
}
