#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @c: data type of char
 * @size: variable size
 *
 * Return: pointer to the array, or NULL if it fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
