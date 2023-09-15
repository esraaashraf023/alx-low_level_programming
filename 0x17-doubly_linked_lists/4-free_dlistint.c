#include "lists.h"

/**
 * free_dlistint - frees a list
 *
 * @head: head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *P;

	while (head != NULL)
	{
		P = head;
		head = head->next;
		free(P);
	}
}
