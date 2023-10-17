#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be cut in half
 * Return: void
 */

void puts_half(char *str)
{
	int i, mid, length;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		mid = length / 2;
	}
	else
	{
		mid = (length - 1) / 2 + 1;
	}
	for (i = mid; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
