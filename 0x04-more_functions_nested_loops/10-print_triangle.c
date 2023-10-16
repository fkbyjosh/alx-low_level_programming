#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: returns no value
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		printf("\n");
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
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
