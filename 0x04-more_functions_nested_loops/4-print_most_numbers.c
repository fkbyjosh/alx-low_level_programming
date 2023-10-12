#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 3
 *
 * Return: returns no value
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 32 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
