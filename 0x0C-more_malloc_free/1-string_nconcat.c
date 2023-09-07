#include "main.h"

/**
 * *string_nconcat - concatenates two strings.
 *
 * @s1: first string's pointer
 * @s2: second string's pointer
 * @n: number of bytes
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, sl1, sl2;

	/* is the strings are NULL? */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* count the length */
	for (sl1 = 0; s1[sl1] != '\0'; sl1++)
		;
	for (sl2 = 0; s2[sl2] != '\0'; sl2++)
		;
	/* memory case 1 & 2 */
	str = malloc(sl1 + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/*copy 1st string*/
	for (j = 0; s1[i] != '\0' ; i++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
