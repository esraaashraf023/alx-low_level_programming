#include "main.h"
#include <string.h>

/**
 * append_text_to_file -  appends text at the end of a file.
 * @filename: name append
 * @text_content: bla bla
 *
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int tart_file, n;

	if (!filename)
		return (-1);
	/* open file in the oppend */
	tart_file = open(filename, O_WRONLY | O_APPEND);
	if (!tart_file)
		return (-1);
	if (text_content)

		n = write(tart_file, text_content, strlen(text_content));
	if (n == -1)
		return (-1);

	close(tart_file);
	return (1);
}
