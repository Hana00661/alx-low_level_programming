#include "search_algos.h"

/**
 * interpolation_search - a function that Interpolation search algorithm
 * @array: the array to be searched
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value if found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0, l = 0, h = size - 1;

	if (!array)
		return (-1);
	if (l == h)
	{
		if (array[l] == value)
			return (l);
		else
			return (-1);
	}
	while (l <= h)
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (pos > h || pos < l)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		if (array[pos] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			return (pos);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
		{
			h = pos;
			continue;
		}
		else
		{
			l = pos;
			continue;
		}
	}
	return (-1);
}
