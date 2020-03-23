#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get a node in index.
 * @head: head node
 * @index: index
 * Return: The data of Heaf
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *get;
	unsigned int i = 0;

	get = head;
	while (get != NULL)
	{
		if (i == index)
			return (get);
		i++;
		get = get->next;
	}
	return (NULL);
}
