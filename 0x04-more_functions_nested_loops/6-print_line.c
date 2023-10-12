#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of _ characters to be drawn
 * Return: an integer
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
