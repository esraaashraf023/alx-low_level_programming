#include "main.h"

/**
 * create_buffer - Allocates 1024 bytes.
 * @file: The name of the second file.
 *
 * Return: to buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFSIZ);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - file_d.
 *
 * @file_The file_d.
 *
 * Return: void.
 */
void close_file(int file_d)
{
	int c;

	c = close(file_d);
	if (c == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", file_d);
		exit(100);
	}
}

/**
 * main - program that
 *
 * @argc: The number.
 * @argv: An array.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file1_d, file2_d, read_count, write_count;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	file1_d = open(argv[1], O_RDONLY);
	read_count = read(file1_d, buffer, BUFSIZ);
	file2_d = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file1_d == -1 || read_count == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		write_count = write(file2_d, buffer, read_count);
		if (file2_d == -1 || write_count == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		read_count = read(file1_d, buffer, BUFSIZ);
		file2_d = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_count > 0);

	free(buffer);
	close_file(file1_d);
	close_file(file2_d);
	return (0);
}
