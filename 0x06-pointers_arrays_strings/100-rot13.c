#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to be encoded
 * Return: a pointer to encoded string
 */

char *rot13(char *str)
{
	char *s = str;

	for (; *s != '\0'; s++)
	{
		if ((*s >= 'a' && *s <= 'm') || (*s >= 'A' && *s <= 'M'))
		{
			*s += 13;
		}
		else if ((*s >= 'n' && *s <= 'z') || (*s >= 'N' && *s <= 'Z'))
		{
			*s -= 13;
		}
	}
	return (str);
}
