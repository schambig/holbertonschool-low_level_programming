#include "hash_tables.h"

/**
 * hash_table_get - Retrieve a value associated with a key
 * @ht: Hash table where to to look into
 * @key: Key to look for
 * Return: The value associated with the key, NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (!ht || !(*key) || !key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (current_node = ht->array[index];
	     current_node && strcmp(current_node->key, key);
	     current_node = current_node->next)
		;

	if (!current_node)
		return (NULL);

	return (current_node->value);
}
