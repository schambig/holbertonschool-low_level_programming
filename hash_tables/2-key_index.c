#include "hash_tables.h"

/**
 * key_index - Receive a hash value and map it into an index
 * @key: Hash value to map
 * @size: Size of the array (number of buckets or slots)
 * Return: The index at which the key/value pair should be stored in the ht
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/**
	 * Usually the % operator is used as the last step in selecting the bucket
	 * The modulo operator is far from ideal, but it is good enough.
	 * It guarantees that the resulting hash bucket is in range:
	 * the result of key % num_buckets is always in range of 0..(num_buckets-1).
	 *
	 * Source (Quora): https://bit.ly/3ClU1zj
	 */
	return (hash_djb2(key) % size);
}
