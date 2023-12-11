#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: destnation input
 *
 * @src: source input
 *
 * @n: the most bytes from src
 *
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + 1] = src[i];
	dest[c + 1] = '\n';

	return (dest);
}
