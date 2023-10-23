#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be compared
 * @accept: string to be compared to
 * Return: returns (0) success
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}
