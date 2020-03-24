#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - inster a node in index.
 * @head: head node
 * @index: index
 * Return: The data of Heaf
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *siguiente;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < (index - 1); i++)
	{
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);
	siguiente = temp->next;
	temp->next = siguiente->next;
	free(siguiente);
	return (1);
}
