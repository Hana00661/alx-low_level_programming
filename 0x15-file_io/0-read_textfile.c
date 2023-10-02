#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: numbers of letters printed
 * Return: numbers of letters printed or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int print_f;
	ssize_t i, j;
	char *ptr;

	if (!filename)
		return (0);

	print_f = open(filename, O_RDONLY);

	if (print_f == -1)
		return (0);

	ptr = malloc(sizeof(char) * (letters));
	if (!ptr)
		return (0);

	i = read(print_f, ptr, letters);
	j = write(STDOUT_FILENO, ptr, i);

	close(print_f);
	free(ptr);
	return (j);
}
