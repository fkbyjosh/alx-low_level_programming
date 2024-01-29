#include "main.h"

/**
 * _strlen_recursion - returns the lengths of a string
 * @s: the string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + (_strlen_recursion(s + 1)));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int length;

	if (*s == '\0')
	{
		return (1);
	}

	length = _strlen_recursion(s);

	if (length <= 1)
	{
		return (1);
	}
	if (*s != s[length - 1])
	{
		return (0);
	}
	return (is_palindrome(s + 1));
}
