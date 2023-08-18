#include "main.h"

/**
 * print_most_numbers - print 0-9 apart
 *			from 2 and 4 using
 *			only _putchar twice
 * Return: Alawys 0 (Success)
*/
void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number == 2 || number == 4)
			continue;
		_putchar(number + 48);
	}
	_putchar('\n');
}
