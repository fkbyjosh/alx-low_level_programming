#include "main.h"

/**
 * is_prime_number - determines if a number is prime or not
 * @n: number to be checked
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int i;

	if (n < 2)
	{
		return (0);
	}
	
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
