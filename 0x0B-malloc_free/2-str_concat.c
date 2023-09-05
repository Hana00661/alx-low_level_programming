#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - concatenates two strings.
 *
 * @s: string
 *
 * Return: int
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: srting 2
 * Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *p;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	p = malloc((size1 + size2) * sizeof(char) + 1);
		if (p == 0)
		return (0);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			p[i] = s1[i];
		else
			p[i] = s2[i - size1];
	}
	p[i] = '\0';
	return (p);
}
