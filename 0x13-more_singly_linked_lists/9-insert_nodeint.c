#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stddef.h>

/**
 * insert_nodeint_at_index - inster a node in index.
 * @head: head node
 * @idx: index
 * @n: Data
 * Return: The data of Heaf
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = current;
		*head = new;
		return (*head);
	}
	while (idx > 1)
	{
		current = current->next;
		idx--;
		if (!current)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
