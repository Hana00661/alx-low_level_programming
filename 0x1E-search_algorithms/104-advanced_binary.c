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

/**
 * advanced_binary - advanced binary search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value to search for
 * Return: index of value if found
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, c;
	int rec;

	if (!array)
		return (-1);
	print_array(array, i, j);
	c = (i + j) / 2;
	if (i == j && array[i] == value)
		return (i);
	if (i == j && array[i] != value)
		return (-1);
	if (array[c] == value)
	{
		if (array[c - 1] < value)
			return (c);
		rec = advanced_binary(&array[i], c - i + 1, value);
	}
	else if (array[c] > value)
	{
			rec = advanced_binary(&array[i], c - i, value);
	}
	else
	{
			rec = advanced_binary(&array[c + 1], j - c, value);
	}
	return (rec);
}
