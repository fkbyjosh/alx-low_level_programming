#include <stdio.h>
#include "main.h"

/**
 * main - prints program name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (successful)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
