#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head node
 * @str: strings
 * Return: The new node at the end
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastnode;
	list_t *last;
	int i;

	lastnode = malloc(sizeof(list_t));
	if (lastnode == NULL)
		return (NULL);
	for (i = 0; str[i] != 0; i++)
	{
	}
	lastnode->len = i;
	lastnode->str = strdup(str);
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
