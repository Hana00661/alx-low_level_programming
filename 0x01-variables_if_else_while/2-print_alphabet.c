#include <stdio.h>
/**
 *main - Ertry point
 *Description: print alphabets lowercase and uppercase
 *Return: Alawys 0 (Success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
