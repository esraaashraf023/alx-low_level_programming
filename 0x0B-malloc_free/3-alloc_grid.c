#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: input
 *@height: input
 *
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **u;
	int w, q;

	if (width <= 0 || height <= 0)
		return (NULL);

	u = malloc(sizeof(int *) * height);
	if (u == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		u[w] = malloc(sizeof(int) * width);

		if (u[w] == NULL)
		{
			for (; w >= 0; w--)
				free(u[w]);

			free(u);
			return (NULL);
		}
	}
	{
		for (q = 0; q < height; q++)
			u[w][q] = 0;
	}
	return (u);
}
