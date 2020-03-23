#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - adds a new node at the beginning of a list_t list.
 * @head: head node
  * Return: void
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	*head = NULL;
}
