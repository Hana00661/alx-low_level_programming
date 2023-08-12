#include <stdio.h>
/**
 *main - Ertry point
 *Description: print numbers of base16 in lowercase
 *Return: Alawys 0 (Success)
*/
int main(void)
{
int digit = 48; /*48; decimal rep of*/

	while (digit <= 102)/*102; decimal rep of f*/
	{
		putchar(digit);
		/*after 9 we jump till 96; */
		if (digit == 57)
			digit += 39;
		digit++;
	}
putchar('\n');
return (0);
}
