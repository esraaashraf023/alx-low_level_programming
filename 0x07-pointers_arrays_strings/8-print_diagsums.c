#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - the sum of the two
 * @a: ironmamm
 * @size: contain alb alb
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int w, t;

	w = 0;
	t = 0;
	while (w < size)
	{
		t = t + *(a + w);
		a = a + size;
		w++;
	}
	printf("%d, ", t);

	t = 0;
	w = 0;
	a = a - size;
	while (w < size)
	{

		t = t + *(a + w);
		a = a - size;
		w++;
	}
	printf("%d\n", t);
}
