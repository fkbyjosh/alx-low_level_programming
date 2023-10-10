#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *@n: the parameter to be tested
 *Return: returns 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		_putchar(-n);
	}
	else
	{
		_putchar(n);
	}
	return (0);
}
