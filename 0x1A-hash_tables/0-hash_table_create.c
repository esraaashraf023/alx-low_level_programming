#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size:  the size of the array.
 *
 * Return: NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_table;

	if (!size)
		return (NULL);
	n_table = malloc(sizeof(hash_table_t));
	if (!n_table)
		return (NULL);

	n_table->size = size;
	n_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!n_table->array)
	{
		free(n_table);
		return (NULL);
	}
	return (n_table);
}
