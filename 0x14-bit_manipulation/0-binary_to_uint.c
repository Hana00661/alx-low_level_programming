#include "main.h"

/**
 * binary_to_uint - function to converts a binary number to an unsigned int
 *
 * @b: binary
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i = 0, count = 0, mult = 1;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if ((b[i] - '0') != 0 && (b[i] - '0') != 1)
			return (0);
		count++;
		i++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			dec += mult;
		mult = mult * 2;
	}
	return (dec);
}
