#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_opcodes - prints the opcodes of its own main function
 * @num_bytes: number of bytes
 *
 * Return: void
 */

void print_opcodes(int num_bytes)
{
	void (*main_ptr)() = &main;
	unsigned char *opcode_ptr = (unsigned char *)main_ptr;
	int i;

	for (int i = 0; i < num_bytes; i++)
	{
		printf("%02x", opcode_ptr[i]);
	}
	printf("\n");
}
