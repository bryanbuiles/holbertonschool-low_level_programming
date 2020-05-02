#include "lists.h"

/**
 * add_dnodeint - Print all elements of a list
 * @head: head of nodes
 * @n: data
 * Return: Add node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = (*head);
	newnode->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = newnode;
	(*head) = newnode;
	return (newnode);
}
