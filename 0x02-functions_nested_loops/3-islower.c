#include "main.h"
/**
 * _is lower - function to check if
 *		character is lowercase
 * @C: ckeck output of function
 * Return: rutern 1 if 'C' IS lowercase
 *		 otherwise always 0 (Success)
*/
int _islower(int C)
{
	if (C >= 97 && C <= 122)
		return (1);
	return (0);
}
