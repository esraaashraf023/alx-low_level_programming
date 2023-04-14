#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously
 * @old_size: the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1, *old_ptr;
	unsigned int p;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);
	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (p = 0; p < new_size; p++)
			ptr1[p] = old_ptr[p];
	}
	if (new_size > old_size)
	{
		for (p = 0; p < old_size; p++)
			ptr1[p] = old_ptr[p];
	}
	free(ptr);
	return (ptr1);
}
