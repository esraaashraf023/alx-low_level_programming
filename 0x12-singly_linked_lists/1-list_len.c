#include "lists.h"

/**
 * list_len -  returns the number of elements
 * @h: pointer
 *
 * Return: void
 */
size_t list_len(const list_t *h)
{
	size_t fil = 0;

	while (h != NULL)
	{
		fil++;
		h = h->next;
	}
	return (fil);
}
