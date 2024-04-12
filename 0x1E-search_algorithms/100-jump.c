#include "search_algos.h"

/**
 * jump_search - jump search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: value to search for
 * Return: index of value if found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t m, l, h, min;

	m = sqrt(size);
	if (!array)
		return (-1);
	for (l = 0, h = m;; l += m, h += m)
	{
		printf("Value checked array[%ld] = [%d]\n", l, array[l]);
		if (array[h] < value)
			continue;
		if (array[h] >= value || (l + m >= size - 1))
		{
			printf("Value found between indexes [%ld] and [%ld]\n", l, h);
			break;
		}
	}
	if (h < size - 1)
		min = h;
	else
		min = size - 1;
	for (; l <= min; l++)
	{
		printf("Value checked array[%ld] = [%d]\n", l, array[l]);
		if (array[l] == value)
			return (l);
	}
	return (-1);
}
