#include "search_algos.h"

/**
 * print_array - prints the searching arrray
 * @array: the array to be printed
 * @i: first index
 * @j: last index
 */

void print_array(int *array, size_t i, size_t j)
{
	size_t c;

	printf("Searching in array:");
	for (c = i; c <= j; c++)
	{
		if (c == i)
			printf(" %d", array[c]);
		else
			printf(", %d", array[c]);
	}
	printf("\n");
}
