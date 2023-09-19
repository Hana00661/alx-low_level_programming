#include "main.h"

/**
 * isPrintableAscii - function that print buffer
 *
 * @n: input
 * Return: pointer
 */

int isPrintableAscii(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - check the code for Holberton School students.
 * @b: buffer
 * @start: num input
 * @end: integer input
 */

void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}
/**
 * printAscii - function for Holberton School students.
 * @b: buffer
 * @start: num input
 * @end: integer input
 */

void printAscii(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintableAscii(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - function that print buffer
 * @size: bytes of buffer
 * @b: buffer pointed
 * Return: pointer
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printAscii(b, start, end);
			printf("\n");
		}
	}
	else
		printf("\n");
}
