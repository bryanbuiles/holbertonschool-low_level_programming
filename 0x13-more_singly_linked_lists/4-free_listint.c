#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - adds a new node at the beginning of a list_t list.
 * @head: head node
  * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_listint(head->next);
	free(head);
}
