#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers.
 * @array: array
 * @size: array
 * @value: bla bla
 *
 * Return: the first index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), start = 0, end = sqrt(size);

	if (array == NULL)
		return (-1);

	while (array[min(end, size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		start += step;
		end += step;
		if (start >= size)
			return (-1);
	}

	while (array[start] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		start++;
		if (start == min(end, size))
			return (-1);
	}

	if (array[start] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		return (start);
	}

	return (-1);
}

/**
 * min - finds the minimum value of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: minimum
 */
int min(int a, int b)
{
	return (a < b ? a : b);
}
