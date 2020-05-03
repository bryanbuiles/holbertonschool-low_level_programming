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
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	temp = *h;
	if (!temp)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = temp;
		temp->prev = new;
		*h = new;
		return (new);
	}
	while (idx > 1 && temp->next)
	{
		temp = temp->next;
		idx--;
	}
	if (idx > 1 && !temp->next)
		return (NULL);
	new->prev = temp;
	new->next = temp->next ? temp->next : NULL;
	if (temp->next)
		temp->next->prev = new;
	temp->next = temp->next && idx > 1 ? NULL : new;
	return (new);
}
