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
	unsigned long int i = 0;
	hash_node_t *node;

	if (!ht)
		return;

	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			if (node->next)
				printf(", ");
			node = node->next;
		}
		i++;
		if (i < ht->size - 1 && ht->array[i + 1])
			printf(", ");
	}
	printf("}\n");
}

