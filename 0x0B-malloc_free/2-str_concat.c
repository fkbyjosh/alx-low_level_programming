#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two string
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to a new space in memory or NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *conc;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}

	conc = malloc(sizeof(char) * (len1 + len2 + 1));

	if (conc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		conc[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		conc[i + j] = s2[j];
	}
	conc[i + j] = '\0';
	return (conc);
}
