#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: pointer to the first occurence of a character
 * Return: pointer to character or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}
