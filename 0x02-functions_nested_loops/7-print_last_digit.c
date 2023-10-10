#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 *@n: parameter to be tested
 *Return: returns an integer
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		_putchar(-last);
	}
	return (last);
}
