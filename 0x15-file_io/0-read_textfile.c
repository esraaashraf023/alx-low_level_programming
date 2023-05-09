#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX stand
 * @filename: file
 * @letters: the number of letters it should read and print
 *
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_reads;
	char *bu;

	if (filename == NULL)
		return (0);
	bu = malloc(sizeof(char) * letters);
	if (bu == NULL)
		return (0);
	file_reads = open(filename , O_RDONLY);
	if (file_reads == -1)
		return (0);
	letters = read(file_reads, bu, letters);
	if ((size_t) write(STDOUT_FILENO, bu, letters) != letters)
		return (0);
	close(file_reads);
	free(bu);
	return (letters);
}
