#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: starting point of array
 * @max: ending point of array
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min++;
	return (arr);
}
