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
		putchar(i);
		i++;
	} while (i <= 122);

	return (0);
}
