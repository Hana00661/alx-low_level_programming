#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: pointer
 * @index: index of the bit
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int unl = 1 << index;

	if (index >= 32)
	{
		return (-1);
	}
	*n &= ~unl;
	return (1);
}
