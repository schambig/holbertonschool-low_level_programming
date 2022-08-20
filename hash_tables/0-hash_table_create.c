#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: Size of the array
 * Return: Returns a pointer to the newly created hash table,
 *	   If something went wrong, return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	(void)size;

	/* allocate memory for ht which points to a new hash table (matrix) */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		free(ht);
		return (NULL);
	}

	/* set size of array, where each element points to the first node of a SLL */
	ht->size = size;
	/* allocate memory for each element (pointer) of the array itself */
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht->array);
		free(ht);
		return (NULL);
	}

	return (ht);
}
