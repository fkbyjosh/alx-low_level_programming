#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: returns no value
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			printf(" ");
		}
		for (k = 0; k <= i; k++)
		{
			printf("#");
		}
		printf("\n");
	}
}
