#include "main.h"

/**
 * is_prime_recursive - checks if a number is prime recursively
 * @n: number to check
 * @i: divisor to check
 * Return: 1 if prime, 0 if not
 */

int is_prime_recursive(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, i - 1));
}

/**
 * is_prime_number - wrapper function for is_prime_recursive
 * @n: the number to be checked
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	return (is_prime_recursive(n, n / 2));
}
