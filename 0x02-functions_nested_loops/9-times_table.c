#include"main.h"

/**
 * time_table - print the 9 times table
 * Example table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
*/

void times_table(void)
{
	int num, nulm, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (nulm = 0; nulm <= 9; nulm++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num + nulm;

			/*
			* put space if product is a single number
			* place the first digit if its two number
			*/
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');

	}
}
