#include "main.h"

/**
 * set_bit -  that sets the value of a bit to 1 at a given index.
 * @n: pla pla
 * @index: bla bla
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
