#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @key: key
 * @ht: pointer to the hash table
 * @value: value of key
 * Return: 1 on success or 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *head;
	hash_node_t *temp;
	hash_node_t *new_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (strlen(key) == 0 || key == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];
	head = ht->array[idx];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = head;
	ht->array[idx] = new_node;
	return (1);
}
