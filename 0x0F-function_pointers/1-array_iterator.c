#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element of an array
 *
 * @array: integer array
 * @action: function pointer
 * @size: size of array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
