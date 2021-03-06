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
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
