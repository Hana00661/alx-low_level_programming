#include "main.h"

/**
 *main - Entry point
 *
 *Discription: print the _putchar  function using prototype
 *Return: 0 success
*/
int main(void)
{
	char str[] = "_putchar";

	int cha;
	for (cha = 0; cha < 8; cha++)
		_putchar(str[cha]);
	_putchar('\n');
return (0);
}
