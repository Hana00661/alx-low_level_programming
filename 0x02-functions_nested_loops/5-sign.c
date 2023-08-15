#include "main.h"

/**
 *print_sign - print + if n>0 or - in n<0
 *@n: takes integer type input
 *Return: 1 if + and 0 if -
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(43);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
