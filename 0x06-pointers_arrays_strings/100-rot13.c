#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to be encoded
 * Return: a pointer to encoded string
 */

char *rot13(char *str)
{
	char *s = str;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (; *s != '\0'; s++)
	{
		char *ptr = alpha;

		while (*ptr != *s && *ptr != '\0')
		{
			ptr++;
		}
		if (*ptr != '\0')
		{
			*s = rot13[ptr - alpha];
		}
	}
	return (str);
}
