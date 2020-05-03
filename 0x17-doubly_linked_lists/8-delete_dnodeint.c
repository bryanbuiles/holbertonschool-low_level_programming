#include "lists.h"
/**
 * delete_dnodeint_at_index - inster a node in index.
 * @head: head node
 * @index: index
 * Return: The data of Heaf
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; temp->next != NULL; i++)
	{
		if (i == index)
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
	}
	return (-1);
}
