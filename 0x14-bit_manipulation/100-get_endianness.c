#include "main.h"
#include <stdint.h>

/**
 * get_endianness - a function that checks the endianness
 * Description: union user-defined data type
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	/* @union: user-defined data type */
	union
	{
	uint32_t i;
	uint8_t c[sizeof(uint32_t)];
	} u;
	u.i = 1;
	return (u.c[0] == 1);
}
