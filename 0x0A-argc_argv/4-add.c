#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (succes), 1 (not digits)
 */

int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	result = 0;

	for (i = 1; i < argc; i++)
	{
		result += atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}
