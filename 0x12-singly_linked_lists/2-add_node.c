#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head node
 * @str: strings
 * Return: The new node at the beginnig
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
	{
	}
	newnode->len = i;
	newnode->str = strdup(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
