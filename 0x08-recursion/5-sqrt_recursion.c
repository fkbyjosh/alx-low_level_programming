#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 * Return: an integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return ((sqrt_recursive(n, 1)));
}

/**
 * sqrt_recursive - recursively finds the squar root of n
 * @n: number to find square root of
 * @guess: current guess for the square root
 * Return: an integer
 */

int sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return ((sqrt_recursive(n, guess + 1)));
}
