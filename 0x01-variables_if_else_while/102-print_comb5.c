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
	int c;
	int d;

	for (a = 48; a < 58; a++)
		for (b = a; b < 58; b++)
			for (c = b; c < 58; c++)
				for (d = c; d < 58; ++d)
				{
					putchar((char) a);
					putchar((char) b);
					putchar((char) 32);
					putchar((char) c);
					putchar((char) d);

					if (a == 57)
						break;
					putchar((char) 44);
					putchar((char) 32);
				}
	return (0);
}
