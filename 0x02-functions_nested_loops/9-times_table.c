#include"main.h"

/**
 *Description: Function Time_table print the 9 times table
 *
 *Return: Alawys 0 (Success)
 *
*/

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');
			prod = num * mult;

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
