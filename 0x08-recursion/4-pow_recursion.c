#include "main.h"

/**
 * _pow_recursion - returns the valuue of x raised to a power
 * @x: number to be evaluated
 * @y: power x should be raised to
 * Return: an int, value of x to the power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return ((x * _pow_recursion(x, y - 1)));
	}
}
