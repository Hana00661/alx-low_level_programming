#include "main.h"

/**
 * print_binary -The binary prints  equivalent of  decimal number
 * @n: number to print in binary
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int dec;
	int a, count = 0;

	for (a = 63; a >= 0; a--)
	{
		dec = n >> a;

		if (dec & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
