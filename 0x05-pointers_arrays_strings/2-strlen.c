#include "main.h"

/**
 * _strlen -  returns the length of a string.
 *
 * @s: string parameter input
 *
 * Return: length of a string
*/

int _strlen(char *s)
{
	int str;

	for (str = 0; *s != '\0'; s++)
		++str;
	return (str);
}
