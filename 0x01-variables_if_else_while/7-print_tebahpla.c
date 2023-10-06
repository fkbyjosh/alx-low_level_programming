#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: o (Success)
 */

int main(void)
{
	int i;

	i = 122;

	do {
		putchar(i);
		i--;
	} while (i >= 97);
	putchar ('\n');

	return (0);
}
