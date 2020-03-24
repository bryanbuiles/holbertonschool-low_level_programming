#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
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
	unsigned int i = 0;
	listint_t *newnode;

	temp = *head;
	newnode = malloc(sizeof(listint_t));
	newnode->n = n;
	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		newnode->next = temp;
		*head = newnode;
		return (*head);
	}
	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			if (newnode == NULL)
			{
				return (NULL);
			}
			else
			{
				newnode->next = temp->next;
				temp->next = newnode;
				return (newnode);
			}
		}
		if (temp->next != NULL)
			temp = temp->next;
		if (!temp)
		{
			free(newnode);
			return (NULL);
		}
		i++;
	}
	return (NULL);
}
