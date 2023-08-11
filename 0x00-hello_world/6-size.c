#include <stdio.h>
/**
 *main - Ertry point
 *Description: A C program that print with put function
 *Return: Alawys 0 (Success)
*/
int main(void)
{
printf("size of a char: %1u byte(s)\n", sizeof(char));
printf("size of an int: %1ubyte(s)\n", sizeof(int));
printf("size of a long int: %1u byte(s)\n", sizeof(long int));
printf("size of a long long int: %1u byte(s)\n", sizeof(long long int));
printf("size of a float: %1u byte(s)\n", sizeof(float));
return (0);
}
