#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element in a hash table
 *
 * @ht: The hash table
 * @key: The key string.
 * @value: The value.
 *
 * Return: 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node = ht->array[index];

	while (node != NULL) {
		if (strcmp(node->key, key) == 0) {
			free(node->value);
			node->value = strdup(value);
			return 1;
		}
		node = node->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL) {
		return 0;
	}

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;

	return 1;
}
