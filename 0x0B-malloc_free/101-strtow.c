#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * @str: the input string
 *
 * Return: a pointer to an array of strings. or NULL on failure
 */

char **strtow(char *str)
{
	int count_words(char *str);
	char *get_next_word(char *str);
	void free_array(char **arr, int size);
	int num_words, word_count = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_words(str);

	if (num_words == 0)
		return (NULL);

	words = malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	while (*str != '\0')
	{

		while (*str == ' ' || *str == '\t')
			str++;
		if (*str != '\0')
		{
			words[word_count++] = get_next_word(str);
			if (words[word_count - 1] == NULL)
			{
				free_array(words, word_count - 1);
				return (NULL);
			}
			str += strlen(words[word_count - 1]);
		}
	}
	words[word_count] = NULL;
	return (words);
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */

int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str != '\0')
	{
		if (*str == ' ' && in_word)
		{
			in_word = 0;
		}
		else if (*str != ' ' && !in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * get_next_word - Gets the next word in a string.
 * @str: The input string.
 *
 * Return: A pointer to the next word, or NULL if failed.
 */

char *get_next_word(char *str)
{
	int i, j, len = 0;
	char *word;

	while (str[i] && (str[i] != ' ' && str[i] != '\t'))
	{
		i++;
	}
	while (str[i] && str[i] != ' ' && str[i] != '\t')
	{
		len++;
		i++;
	}
	if (len == 0)
	{
		return (NULL);
	}
	word = malloc((len + 1) * sizeof(char));
	if (word == NULL)
	{
		return (NULL);
	}

	i = i - len;

	for (j = 0; j < len; j++)
	{
		word[j] = str[i];
		i++;
	}

	word[len] = '\0';

	return (word);
}

/**
 * free_array - Frees an array of strings.
 * @arr: The array of strings.
 * @size: The size of the array.
 */

void free_array(char **arr, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		free(arr[i]);
	}
	free(arr);
}
