#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
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
}
