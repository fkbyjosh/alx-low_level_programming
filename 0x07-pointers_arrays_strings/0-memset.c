#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: memory to be used
 * Return: pointer to the area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	
	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);
}
