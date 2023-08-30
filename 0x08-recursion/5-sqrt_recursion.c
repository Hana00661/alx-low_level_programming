#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural
 *			square root of a number.
 * square - square root
 * @n: interger
 * @val: square root
 *
 * Return: integer
*/

int square(int n, int val);
int _sqrt_recursion(int n)
{

	return (square(n, 1));
}

/**
 * square - square root
 *
 * @val: square root
 * @n: integer
 *
 * Return: integer
*/

int square(int n, int val)
{

	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
