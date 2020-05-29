#include "hash_tables.h"
#include <stdbool.h>
/**
 * hash_table_create - get a node in index.
 * @size: size of hash table
 * Return: The hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable = NULL;

	if (size < 1)
		return (NULL);
	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);
	htable->size = size;
	htable->array = malloc(size * sizeof(hash_node_t));
	if (htable->array == NULL)
	{
		free(htable);
		return (NULL);
	}
	memset(htable->array, 0, size * sizeof(hash_node_t));
	return (htable);
}
