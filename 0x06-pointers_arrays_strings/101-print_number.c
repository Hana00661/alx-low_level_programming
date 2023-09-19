#include "main.h"

/**
 * print_number - function that print integer
 *
 * @n: integer
 *
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10)
		print_number(i / 10);
	_putchar(48 + (i % 10));
}
