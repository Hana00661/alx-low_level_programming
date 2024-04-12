#include "search_algos.h"
#include "printarray.c"

/**
 * exponential_search - a function that Exponential search algorithm
 * @array: the array to be searched
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value if found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, min, x, j, c;

	if (!array)
		return (-1);
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	if (i > (size - 1))
		min = size - 1;
	else
		min = i;
	x = i / 2;
	j = min;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, min);
	while (1)
	{
		print_array(array, x, j);
		c = (x + j) / 2;
		if (array[c] == value)
			return (c);
		if (x == j)
			break;
		if (array[c] > value)
			j = c - 1;
		else
			x = c + 1;
	}
	return (-1);
}
