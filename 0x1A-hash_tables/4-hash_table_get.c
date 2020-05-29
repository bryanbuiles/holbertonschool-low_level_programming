#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves the value of key.
 * @ht: pointer to hash table
 * @key: key
 * Return: value for the given key or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *coici;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
		return (NULL);
	coici = ht->array[idx];
	while (coici != NULL)
	{
		if (strcmp(coici->key, key) == 0)
			return (coici->value);
		coici = coici->next;
	}
	return (NULL);
}
