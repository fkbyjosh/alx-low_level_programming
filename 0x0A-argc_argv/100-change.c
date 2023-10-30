#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - minimum nuber of coins to make change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success), 1 (unsuccessful)
 */

int coins(int change);

int main(int argc, char *argv[])
{
	int change;
	int numCoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	if (change < 0)
	{
		printf("0\n");
		return (0);
	}
	numCoins = coins(change);

	printf("%i\n", numCoins);
	return (0);
}

/**
 * coins - return change
 * @change: change
 *
 * Return: 0 (success)
 */

int coins(int change)
{
	int count = 0;

	while (change > 0)
	{
		if (change >= 25)
		{
			change -= 25;
			count++;
		}
		else if (change >= 10)
		{
			change -= 10;
			count++;
		}
		else if (change >= 5)
		{
			change -= 5;
			count++;
		}
		else if (change >= 2)
		{
			change -= 2;
			count++;
		}
		else
		{
			change -= 1;
			count++;
		}
	}
	return (count);
}
