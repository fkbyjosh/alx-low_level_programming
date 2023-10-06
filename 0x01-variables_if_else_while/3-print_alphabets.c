#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	i = 97;

	j = 65;
	do {
		putchar(i);
		i++;
	} while (i <= 122);
	do {
		putchar(j);
		j++;
	} while (j <= 90);
	putchar('\n');

	return (0);
}
