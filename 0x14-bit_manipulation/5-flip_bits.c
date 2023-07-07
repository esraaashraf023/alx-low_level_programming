#include "main.h"

/**
 * flip_bits -  function that returns the number of bits you
 * would need to flip to get from one.
 * @n: the number
 * @m: number to another.
 *
 * Return: void
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int opp = n ^ m;
	unsigned int count = 0;
	
	while (opp)
	{
		count += opp & 1;
		opp = opp >> 1;
	}
	return (count);
}
