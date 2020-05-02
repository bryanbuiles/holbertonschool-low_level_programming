#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list_t list.
 * @head: head node
 * @n: Elements
 * Return: The new node at the end
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *last;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = newnode;
	newnode->prev = last;
	return (newnode);
}
