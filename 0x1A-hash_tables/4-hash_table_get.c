#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 *
 * @ht: The hash.
 * @key: The key string
 *
 * Return: NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];

	while (!node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
