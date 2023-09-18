#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: save the copied
 * @src: memory area
 * @n: bytes form memory area
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
