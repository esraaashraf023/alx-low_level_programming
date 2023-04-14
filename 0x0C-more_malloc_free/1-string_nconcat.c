#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: frist string
 * @s2: bla bla
 * @n: ironman
 *
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int q = 0, k = 0, w = 0, g = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[q])
		q++;

	while (s2[w])
		w++;

	if (n >= w)
		g = q + w;
	else
		g = q + n;
	p = malloc(sizeof(char) * g + 1);
	if (p == NULL)
		return (NULL);

	w = 0;
	while (k < g)
	{
		if (k <= q)
			p[k] = s1[k];

		if (k >= q)
		{
			p[k] = s2[w];
			w++;
		}
		k++;
	}
	p[k] = '\0';
	return (p);
}
