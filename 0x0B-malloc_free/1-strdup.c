#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory
 * @str: data type
 *
 * Return: void
 */

char *_strdup(char *str)
{
	int a, h;
	char *k;

	if (str == NULL)
		return (NULL);

	a = 0;
	while (str[a] != '\0')
		a++;

	k = malloc(sizeof(char) * (a + 1));

	if (k == NULL)
		return (NULL);

	for (h = 0; str[h]; h++)
		k[h] = str[h];

	return (k);
}
