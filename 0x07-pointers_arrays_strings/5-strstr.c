#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: first occurrence of substring in haystack
 * Return: returns (0) success
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*haystack != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
