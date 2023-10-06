#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 *
 * @ht: bla bla bla
 *
 * Return: 0
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node;
	int printed = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			printed = 1;
			current_node = current_node->next;
		}
	}

	printf("}\n");
}
