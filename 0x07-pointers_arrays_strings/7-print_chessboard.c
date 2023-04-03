#include "main.h"

/**
 * print_chessboard - Prints chess board arrangement stored in array.
 *
 * @a: Two dimensional array containing the chess arrangements.
 */

void print_chessboard(char (*a)[8])
{
	short i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7 && i != 7)
				_putchar('\n');
		}
	}
}
