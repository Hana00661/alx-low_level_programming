#include "main.h"

/**
 * main - print number 1 - 100 followed by new line
 *	number that are multiples of 3 print Fizz
 *	number that are multiples of 5 print Buzz
 *	number that are multiples of 3 and 5 print FizzBuzz
 *	each number and word to be separated by space
 *
 * Return: Alawys 0 (Success)
*/

int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0 && !(number % 5 == 0))
			printf("Fizz");
		else if (number % 5 == 0 && !(number % 3 == 0))
			printf("Buzz");
		else if (number % 3 == 0 && number % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", number);

		if (number != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
