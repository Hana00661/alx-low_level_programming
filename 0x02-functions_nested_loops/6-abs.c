#include "main.h"

/**
 * _abs - function that computes the absolute
 *		value of an integer
 *
 *@n: takes the number type is integer
 *Rrturn: Return: Alawys 0 (Success)
*/
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
