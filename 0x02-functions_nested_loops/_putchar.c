#include <unistd.h>
#include "main.h"
/**
 *_putchar - writes the character C to stdout
 *@C: The character to  print
 *Return: 1 success , -1 error
*/
int _putchar(char C)
{
	return (write(1, &C, 1));
}
