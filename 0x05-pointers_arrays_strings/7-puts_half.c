#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be cut in half
 * Return: void
 */

void puts_half(char *str)
{
	int i, length;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length - 1) / 2;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
