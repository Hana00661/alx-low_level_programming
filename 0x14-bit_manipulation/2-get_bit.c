#include "main.h"

/**
 * get_bit -The value of  bit is returned  at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
