#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed
 * @argc - argument count
 *
 * Return: 0 (successful)
 */

int main (int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
