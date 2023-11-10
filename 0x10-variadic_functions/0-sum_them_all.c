#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: integers to be summed
 *
 * Return: 0 (if n is equal to 0)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int total = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		total += va_arg(args, int);
	va_end(args);
	return (total);
}
