#include <stdio.h>
#include <stdlib.h>

/**
 * main - funstion
 * @argc: num
 * @argv: pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int s = 0;
	int c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	s = atoi(argv[1]);
	while (s > 0)
	{
		c++;
		if ((s - 25) >= 0)
		{
			s = s - 25;
			continue;
		}
		if ((s - 10) >= 0)
		{
			s = s - 10;
			continue;
		}
		if ((s - 5) >= 0)
		{
			s = s - 5;
			continue;
		}
		if ((s - 2) >= 0)
		{
			s = s - 2;
			continue;
		}
		s--;
	}
	printf("%d\n", c);
	return (0);
}
