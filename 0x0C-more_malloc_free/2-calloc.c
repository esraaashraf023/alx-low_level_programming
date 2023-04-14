#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array
 * @nmemb: one number
 * @size: The memory is set to zero
 *
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int q = 0, c = 0;
	char *o;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = nmemb * size;
	o = malloc(c);

	if (o == NULL)
		return (NULL);

	while (q < c)
	{
		o[q] = 0;
		q++;
	}

	return (o);
}
