#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - entry point of program
 * @argc: number of command line arguments
 * @argv: argument vector
 *
 * Return: 0 (success), 1 (incorrect), 2 (negative)
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(num_bytes);
	return (0);
}

/**
 * print_opcodes - prints the opcodes of its own main function
 * @num_bytes: number of bytes
 *
 * Return: void
 */

void print_opcodes(int num_bytes)
{
	void (*main_ptr)() = (void (*)())&main;
	unsigned char *opcode_ptr = (unsigned char *)main_ptr;
	int i;

	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02x", opcode_ptr[i]);
	}
	printf("\n");
}
