#include "main.h"

/**
 * get_bit -  function that returns the value of a bit at a given index.
 * @n: bla bla
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int p;

	p = n >> index;

	if (index > 64)
		return (-1);

	return (p & 1);
}
