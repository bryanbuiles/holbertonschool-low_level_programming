#include "hash_tables.h"
/**
 * key_index - get the key at index.
 * @key: key of hash table
 * @size: siz of hash table
 * Return: The key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int k;

	k = hash_djb2(key) % size;
	return (k);
}
