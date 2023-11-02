#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of array elements
 * @size: size of array
 *
 * Return: NULL if nmemb or size is 0, or if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;
	return (ptr);
}
