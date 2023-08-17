#include "main.h"

/**
 * print_number -  a function that prints an integer.
 *
 * @n: number that will be printed
*/

void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('_');
		number = -number;
	}

	if ((number / 10) > 0)
		print_number(number / 10);

	_putchar((number % 10) + 48);
}
