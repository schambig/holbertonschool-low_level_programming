#include "hash_tables.h"

/**
 * hash_table_set - Add an element to a hash table
 * @ht: Hash table where to add or update the key/value to
 * @key: Hash value to map into an index
 * @value: The value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i, index;
	hash_node_t *new_node;

	if (!ht || !key || !(*key) || !value)
		return (0);

	/* get index by: key % (ht->size which is thw num of buckets or slots) */
	index = key_index((const unsigned char *)key, ht->size);
	/* check whether the index exist or not */
	for (i = index; ht->array[i]; ++i)
	{
		/* replace value if index exists */
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}

	/* allocate memory for new node which store the key/value pair */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
		return (0);
	new_node->value = strdup(value);
	if (new_node->value == NULL)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
