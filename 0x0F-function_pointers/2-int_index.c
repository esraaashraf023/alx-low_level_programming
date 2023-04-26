#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: bla bla
 * @size: is the number of elements
 * @cmp:  pointer to the function
 *
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int z = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (z < size)
			{
				if (cmp(array[z]))
				return (z);

				z++;
			}
		}
	}
	return (-1);
}
