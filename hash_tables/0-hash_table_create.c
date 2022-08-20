#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: Size of the array
 * Return: Returns a pointer to the newly created hash table,
 *	   If something went wrong, your function should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size);
{
	char *ht = NULL;

	ht = malloc(sizeof(size));
	if (ht == NULL)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
