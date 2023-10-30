#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: second number to be multiplied
 *
 * Return: 0 (success), 1 (unsuccessful)
 */

int main(int argc, char *argv[])
{
	if (argc - 1 < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int result = num1 * num2;

		printf("%d\n", result);
	}
	return (0);
}
