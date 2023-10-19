#include "main.h"

/**
 * string_toupper - changes lowercase string to uppercase
 *@str: string to be converted to uppercase
 * Return: uppercase characters
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
