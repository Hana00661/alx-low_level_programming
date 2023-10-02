#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content writed in the file
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int cf, nl, wr;

	if (!filename)
		return (-1);
	cf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (cf == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nl = 0; text_content[nl]; nl++)
		;

	wr = write(cf, text_content, nl);

	if (wr == -1)
		return (-1);
	close(cf);
	return (1);
}
