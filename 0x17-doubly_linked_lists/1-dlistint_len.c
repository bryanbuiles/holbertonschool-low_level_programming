#include "lists.h"

/**
 * dlistint_len - Print all elements of a list
 * @h: head of nodes
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
