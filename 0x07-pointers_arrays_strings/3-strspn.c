#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the substring
 * @accept: pointer to the initial segment of s
 * Return: returns (0) Success
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
