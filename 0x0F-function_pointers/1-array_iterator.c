#include "function_pointers.h"

/**
 * array_iterator -  executes a function
 * @array: bla bla
 * @size: print
 * @action: printer
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int q = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (q < size)
		{
			action(array[q]);
			q++;
		}
	}
}
