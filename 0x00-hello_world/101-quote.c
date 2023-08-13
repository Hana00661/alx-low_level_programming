#include <unistd.h>
/**
 *main - Entry point
 *Description: A c program that prints a line to the standard error
 *Return: 1 (error)
*/
int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora korpar, 2015-10-19\n";

	write(2, quo, 59);
return (1);
}
