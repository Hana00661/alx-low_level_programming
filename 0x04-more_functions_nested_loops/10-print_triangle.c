#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: size of the triangle
 *
 * Return: Alawys 0 (Success)
*/

void print_triangle(int size)
{
	int hg, bs;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hg = 1; hg <= size; hg++)
		{
			for (bs = 1; bs <= size; bs++)
			{
				if ((hg + bs) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
