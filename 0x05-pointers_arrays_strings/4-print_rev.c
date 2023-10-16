#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 * Return: void
 */

void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	end--;

	while (end >= s)
	{
		_putchar(*end);
		end--;
	}
	_putchar('\n');
}
