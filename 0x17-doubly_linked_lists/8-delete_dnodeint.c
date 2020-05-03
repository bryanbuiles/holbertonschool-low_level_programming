#include "lists.h"
/**
 * delete_dnodeint_at_index - inster a node in index.
 * @head: head node
 * @index: index
 * Return: The data of Heaf
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *new;

	if (!head || !*head)
		return (-1);
	new = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(new);
		return (1);
	}
	while (index > 1 && new && new->next)
	{
		new = new->next;
		index--;
	}
	if (!new->next)
		return (-1);
	temp = new->next;
	new->next = temp->next ? temp->next : NULL;
	if (temp->next)
		temp->next->prev = new;
	free(temp);
	return (1);
}
