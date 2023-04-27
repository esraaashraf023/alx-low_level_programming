#include "lists.h"
#include <stdio.h>

/**
 * print_list -  prints all the elements
 * @h: pointer
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t q = 0;

	while (q)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next
			q++;
	}
	return (q);
}
