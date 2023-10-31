#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string
 * @str: the string to duplicate
 *
 * Return: apointer to newly allocated space or NULL
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
