#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 * @head: head node
 * @n: Elments
 * Return: The new node at the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastnode;
	listint_t *last;

	lastnode = malloc(sizeof(listint_t));
	if (lastnode == NULL)
		return (NULL);
	lastnode->n = n;
	lastnode->next = NULL;
	if (*head == NULL)
	{
		*head = lastnode;
		return (lastnode);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = lastnode;
	return (lastnode);
}
