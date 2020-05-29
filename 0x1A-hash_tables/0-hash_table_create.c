#include "hash_tables.h"
/**
 * hash_table_create - get a node in index.
 * @size: size of hash table
 * Return: The hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *htable = NULL;

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);
	htable->array = malloc(sizeof(hash_node_t *) * size);
	if (htable->array == NULL)
	{
		free(htable);
		htable = NULL;
		return (NULL);
	}
	while (i < size)
	{
		htable->array[i] = NULL;
		i++;
	}
	htable->size = size;
	return (htable);
}
