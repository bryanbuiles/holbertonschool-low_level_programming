#include "lists.h"
/**
 * get_dnodeint_at_index - get a node in index.
 * @head: head node
 * @index: index
 * Return: The data of Heaf
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *get;
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
