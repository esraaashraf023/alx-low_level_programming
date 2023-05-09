#include "main.h"
#include <string.h>

/**
 * create_file -  creates a file.
 * @filename: file name
 * @text_content: string to write to the file
 *
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int new_file, len = 0;

	if (filename == NULL)
		return (-1);
	/* created file the  permissions rw------- */
	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (new_file == -1)
		return (-1);
	/* text_content file to write */
	if (text_content != NULL)
		while (text_content[len])
			len++;
	if (write(new_file, text_content, len) != len)
	{
		close(new_file);
		return (-1);
	}
	close(new_file);
	return (1);
}
