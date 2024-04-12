#include "search_algos.h"

int _recursion(int *array, int value, size_t left, size_t right);

/**
 * _recursion - helper to advanced_binary, recursively searches
 * for a value in an integer array
 * @array: pointer to first element of array to seach
 * @value: value to search for
 * @left: starting index in array
 * @right: ending index in array
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */
int _recursion(int *array, int value, size_t left, size_t right)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid = (left + right) / 2;
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
		printf("%i%s", array[i], i == right ? "\n" : ", ");

	if (array[left] == value)
		return ((int)left);

	if (array[left] != array[right])
	{
		if (array[mid] < value)
			return (_recursion(array, value,
							mid + 1, right));
		if (array[mid] >= value)
			return (_recursion(array, value,
							left, mid));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using a binary search algorithm.
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search
 * Return: first index containing value, or -1 if value not found or
 * array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;

	if (!array)
		return (-1);

	return (_recursion(array, value, left, right));
}
