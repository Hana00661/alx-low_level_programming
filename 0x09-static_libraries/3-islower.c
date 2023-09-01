#include "main.h"
/**
 * _islower - function to check if
 *		character is lowercase (function _islower)
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
