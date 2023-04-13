#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc
 * @b:  the allocated memory
 *
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *q;

	q = malloc(b);
	if (q == NULL)
		exit(98);

	return (q);
}
