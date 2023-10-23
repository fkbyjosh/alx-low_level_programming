#include "main.h"

/**
 * _chessboard - prints the chessboard
 * @a: array
 * Return: returns (0)
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			char c = a[i][j];

			_putchar(c);
		}
		_putchar('\n');
	}
}
