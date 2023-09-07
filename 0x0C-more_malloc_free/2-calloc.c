#include "main.h"

/**
 * _memset - fills memory
 *
 * @S: constant pointer
 * @b: constant
 * @n: maximum bytes
 *
 * Return: S
 */

char *_memset(char *S, char b, unsigned int n)
{
	char *p = S;

	while (n--)
		*S++ = b;
	return (p);
}
/**
 * *_calloc - allocates memory for an array
 *
 * @nmemb: array length
 * @size: elements's size
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(sizeof(int) * nmemb);
	if (ptr == 0)
		return (NULL);
	_memset(ptr, 0, sizeof(int) * nmemb);
	return (ptr);
}
