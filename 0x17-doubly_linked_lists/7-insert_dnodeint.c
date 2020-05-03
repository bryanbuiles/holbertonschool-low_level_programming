#include "lists.h"
#include <stddef.h>

/**
 * insert_dnodeint_at_index - inster a node in index.
 * @h: h node
 * @idx: index
 * @n: Data
 * Return: The data of Heaf
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL, *new = NULL;
	unsigned int i = 1;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
		return (NULL);
	current = *h;
	new->n = n;
	if (idx == 0)
	{
		*h = new;
		new->next = current;
		new->prev = NULL;
		current->prev = new;
		return (new);
	}
	while (current->next != NULL)
	{
		if (i == idx)
		{
			new->prev = current;
			new->next = current->next;
			current->next = new;
			new->next->prev = new;
		}
		current = current->next;
		i++;
	}
	if (i == idx)
	{
		new->prev = current;
		new->next = NULL;
		current->next = new;
	}
	if (i < idx)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
