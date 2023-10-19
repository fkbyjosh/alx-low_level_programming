#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: encoded character
 */

char *leet(char *str)
{
	char *leetstr = "aAeEoOtTlL";
	char *leetcode = "4433007711";

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leetstr[j] != '\0'; j++)
		{
			if (str[i] == leetstr[j])
			{
				str[i] = leetcode[j];
				break;
			}
		}
	}
	return (str);
}
