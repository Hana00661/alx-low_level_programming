#include "main.h"

/**
 * *malloc_checked -  allocates memory
 *
 * @b: int
 *
 * Return: pointer or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == 0)
		exit(98);

	return (p);
}
