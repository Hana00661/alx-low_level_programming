#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_all - Prints anything
 * @format: The conversion specifier to prints
 * Return: No
 */

void print_all(const char * const format, ...)
{
	va_list args;
	f_dt form_types[] = {
		{ "c", print_a_char },
		{ "i", print_a_integer },
		{ "f", print_a_float },
		{ "s", print_a_char_ptr }
	};
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *form_types[j].identifier)
			{
				form_types[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		j++;
	}

	va_end(args);
	printf("\n");
}

/**
 * print_a_char - Prints a character of char type
 * @separator: The character
 * @args: A variadic
 * Return: No
 */

void print_a_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_a_float - Prints a character of float type
 * @separator: The character
 * @args:  variadic
 * Return: Null
 */

void print_a_float(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, arg);
}
