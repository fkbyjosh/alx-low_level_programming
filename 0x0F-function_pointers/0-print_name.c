#include "main.h"

/**
 * print_name - prints a name
 * @name: pointer to a name
 * @f: pointer to function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * print_to_console - prints name characters to console
 * @name: name to be printed
 *
 * Return: void
 */

void print_to_console(char *name)
{
	int i;
	
	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
}
