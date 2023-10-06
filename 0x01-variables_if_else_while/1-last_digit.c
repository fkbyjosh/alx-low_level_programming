#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n);
	int m;

	m = n % 10;
	if (m > 5)
	{
		printf(" %d and is greater than 5", m);
	} else if (m == 0)
	{
		printf(" %d and is 0", m);
	} else
	{
		printf(" %d and is less than 6 and not 0", m);
	}
	return (0);
}
