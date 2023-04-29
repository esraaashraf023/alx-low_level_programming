#include "lists.h"

/**
 * add_node_end -  adds a new node at the end
 * @head: head file
 * @str: pointer listi
 *
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *pte;
	list_t *data;

	if (head == NULL)
		return (NULL);

	/*add memory for new node*/
	pte = malloc(sizeof(list_t));
	if (!pte)
		return (NULL);

	/*copy S*/
	pte->str = strdup(str);
	if (!pte->str)
	{
		free(pte);
		return (NULL);
	}
	pte->len = strlen(str);
	pte->next = NULL;

	if (*head == NULL)
	{
		*head = pte;
		return (pte);
	}
	else
	{
		data = *head;
	}
	while (data->next != NULL)
		data = data->next;
	/*ADD NEW NODE LIST*/
	data->next = pte;

	return (pte);
}
