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

	for (i = 48; i < 57; i++)
		for (j = i+1; j < 58; j++)
		{
			putchar((char) i);
			putchar((char) j);
			if ((i == 56) && (j == 57))
			{
				putchar('\n');
				break;
			}
			putchar((char) 44);
			putchar((char) 32);
		}

	return (0);
}
