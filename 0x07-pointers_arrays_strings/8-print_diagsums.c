#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 *			of a square matrix of integers.
 *
 * @a: array 2d
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int i, ar1 = 0, ar2 = 0;

	for (i = 0; i < size; i++)
	{
		ar1 += a[i];
		ar2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", ar1);
	printf("%d\n", ar2);
}
