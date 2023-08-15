#include "main.h"
/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 * Return: Alawys 0 (Success)
 */

void print_alphabet_x10(void)
{
	int line, cha;

	for (line = 0; line <= 9; line++)
	{
		for (cha = 'a'; cha <= 'z'; cha++)
			_putchar(cha);
		_putchar('\n');
	}
}
