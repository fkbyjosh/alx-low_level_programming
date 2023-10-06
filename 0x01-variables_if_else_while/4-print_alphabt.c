#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	i = 97;
	do {
	if (i != 113 && i != 101)
	{
		putchar(i);
	}
		i++;
	} while (i <= 122);
	putchar('\n');

	return (0);
}
