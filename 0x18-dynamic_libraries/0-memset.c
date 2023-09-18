#include "main.h"

/**
 * _memset - ironman
 * @s: input
 * @b: address of memory
 * @n: size of the to print
 *
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
