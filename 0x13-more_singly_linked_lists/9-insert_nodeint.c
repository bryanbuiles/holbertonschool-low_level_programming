#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inster a node in index.
 * @head: head node
 * @idx: index
 * @n: Data
 * Return: The data of Heaf
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *newnode;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL || temp == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = temp;
		*head = newnode;
		return (*head);
	}
	if (idx == 1 && temp == NULL)
		return (NULL);
	while (idx > 1)
	{
		temp = temp->next;
		idx--;
		if (!temp)
		{
			free(newnode);
			return (NULL);
		}
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
