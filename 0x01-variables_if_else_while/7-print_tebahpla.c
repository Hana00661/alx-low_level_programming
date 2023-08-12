#include <stdio.h>
/**
 *main - Ertry point
 *Description: print a - z reverse
 *Return: Alawys 0 (Success)
*/
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
putchar('\n');
return (0);
}
