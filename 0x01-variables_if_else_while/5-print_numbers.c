#include <stdio.h>
/**
 *main - Ertry point
 *Description: print all single digit numbers
  *Return: Alawys 0 (Success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
printf("\n");
return (0);
}
