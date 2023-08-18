#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ charactor
 * 	should be printed 
*/

void print_diagonal(int n)
{
	int pos,spa;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (pos = 1; spa <= n; pos++)
		{
			for (spa = 1; spa <= pos; spa++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
