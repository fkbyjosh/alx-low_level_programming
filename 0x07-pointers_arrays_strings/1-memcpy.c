#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: destination for pointer
 * @src: source of memory area
 * @n: number of bytes to be copied
 * Return: returns a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;
	char *ptr_src = src;

	while (n > 0)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
		n--;
	}
	return (dest);
}
