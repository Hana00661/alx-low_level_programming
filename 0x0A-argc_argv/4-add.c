#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: num
 * @argv: pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int r, m, n;

	r = 0;

	for (m = 1; m < argc; m++)
	{
		for (n = 0; argv[m][n] != '\0'; n++)
		{
			if (argv[m][n] < '0' || argv[m][n] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		r = r + atoi(argv[m]);
	}
	printf("%d\n", r);
	return (0);
}
