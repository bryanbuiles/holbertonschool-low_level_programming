#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tempo;
	int flag = 0;
	unsigned long int idx = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (idx < ht->size)
	{
		tempo = ht->array[idx];
		while (tempo)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tempo->key, tempo->value);
			flag = 1;
			tempo = tempo->next;
		}
		idx++;
	}
	printf("}\n");
}
