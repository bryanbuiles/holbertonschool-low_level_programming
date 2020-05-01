#include "lists.h"
/**
 * print_dlistint - Print all elements of a list
 * @h: head of nodes
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
