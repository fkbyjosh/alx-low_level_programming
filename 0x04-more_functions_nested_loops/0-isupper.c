#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: parameter to be tested
 * Return: returns an integer
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
