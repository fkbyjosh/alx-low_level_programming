#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	char c[] = "_putchar\n";
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}
	return (0);
}
