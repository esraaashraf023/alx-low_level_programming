#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int z = 1;
	char *endianness = (char *)&z;

	if (*endianness)
		return (1);
	
		else
	return (0);
}
