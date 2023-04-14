#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: bla bla
 * @max: included
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *esr;
	int p, y;

	if (min > max)
		return (NULL);

	y = max - min + 1;
	esr = malloc(sizeof(int) * y);

	if (esr == NULL)
		return (NULL);

	for (p = 0; min <= max; p++)
		esr[p] = min++;

	return (esr);
}
