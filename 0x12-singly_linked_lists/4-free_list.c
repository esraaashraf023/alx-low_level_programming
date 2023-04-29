#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer
 *
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *value = head;

	while (value != NULL)
	{
		value = head->next;
			free(head->str);
		free(head);
	}
	head = NULL;
}
