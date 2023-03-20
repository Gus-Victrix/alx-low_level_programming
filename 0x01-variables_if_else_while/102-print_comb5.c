#include <stdio.h>

/**
 * main - prints unrepeated combinations of four numbers using putchar
 *
 * Return: 0 because it's an int type function
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 99; a++)
		for (b = a + 1; b <= 99; b++)
		{
			putchar(a / 10 + 48);
			putchar(a % 10 + 48);
			putchar(32);
			putchar(b / 10 + 48);
			putchar(b % 10 + 48);

			if ((a == 98) && (b == 99))
			{
				putchar('\n');
				break;
			}
			putchar(44);
			putchar(32);
		}
	return (0);
}
