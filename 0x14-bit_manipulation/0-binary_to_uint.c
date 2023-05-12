#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: string function
 *
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	char *f = NULL;

	if (b == NULL)
		return (0);

	bin = (unsigned int)strtol(b, &f, 2);
	if (*f)
		return (0);
	return (bin);
}
