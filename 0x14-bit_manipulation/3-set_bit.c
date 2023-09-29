#include "main.h"

/**
 * set_bit - Bit is set at a given index to 1
 * @n: pointer  the number to change
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
