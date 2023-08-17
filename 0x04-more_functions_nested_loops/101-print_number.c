#include "main.h"

/**
 * print_number -  a function that prints an integer.
 *
 * @n: integer that will be printed.
*/

void print_number(int n)
{
	unsigned int number = n;

	/*first ckeck if its negative*/
	if (n < 0)
	{
		_putchar('_');
		number = -number;
	}

	/*print the first few digit*/
	if ((number / 10) > 0)
		print_number(number / 10);

	/*print the last digit*/
	_putchar((number % 10) + 48);
}

