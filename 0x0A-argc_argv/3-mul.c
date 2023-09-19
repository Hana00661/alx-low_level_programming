#include <stdio.h>
#include <stdlib.h>

/**
 * main - functin
 * @argc:num
 * @argv: pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int total;

	if (argc == 3)
	{
		total = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", total);
	}
	else
	{
		printf("Error\n");
		return (2);
	}
	return (0);
}
