#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Prints a character.
 * @args: Argument list.
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer.
 * @args: Argument list.
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: Argument list.
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 * @args: Argument list.
 */

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	const char *ptr = format;
	int flag;

	va_start(args, format);

	while (ptr && ptr[i])
	{
		switch (ptr[i])
		{
			case 'c':
				print_char(args);
				flag = 1;
				break;
			case 'i':
				print_int(args);
				flag = 1;
				break;
			case 'f':
				print_float(args);
				flag = 1;
				break;
			case 's':
				print_string(args);
				flag = 1;
				break;
			default:
				flag = 0;
				break;
		}
		if (ptr[i + 1] && flag)
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
