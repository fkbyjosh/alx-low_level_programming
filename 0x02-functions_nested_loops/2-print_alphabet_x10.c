#include "main.h"

/**
 *print_alphabet_x10 - print ten alphabets
 *
 *Return: it returns no value
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char alph;

	while (i <= 10)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		i++;
		_putchar('\n');
	}
}
