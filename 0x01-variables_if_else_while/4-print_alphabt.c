#include <stdio.h>
/**
 *main - Ertry point
 *Description: print alphabet letters except q and c
 *Return: Alawys 0 (Success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
putchar('\n');
return (0);
}
