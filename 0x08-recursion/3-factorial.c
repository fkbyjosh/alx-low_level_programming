#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number who's factorial is to be found
 * Return: an int, the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
