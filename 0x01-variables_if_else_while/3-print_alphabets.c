#include <stdio.h>
/**
 *main - Ertry point
 *Description: print alphabet in lowercase lowercase and uppercase
 *Return: Alawys 0 (Success)
*/
int main(void)
{
	char ch = 'a';
	char CH = 'A';
	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print A - Z*/
	while (CH <= 'Z')
	{
	putchar(CH);
	CH++;
	}
	 putchar('\n');
return (0);
}
