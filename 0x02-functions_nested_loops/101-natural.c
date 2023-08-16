#include "main.h"

/**
 * main - Ertry point
 * Description: count the sum of all multiples
 *		of 3 or 5
 *
 * Return: Alawys 0 (Success)
*/
int main(void)
{
	int n1, n2;

	for (n2 = 0; n2 < 1024; n2++)
	{
		if ((n2 % 3 == 0) || (n2 % 5 == 0))
			n1 += n2;
	}
	printf("%d\n", n1);
	return (0);
}
