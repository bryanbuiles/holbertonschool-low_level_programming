#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - adds a new node at the end of a list_t list.
 * @head: head node
 * Return: The data of Heaf
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	temp = *head;
	if (*head == NULL)
		return (0);
	data = (*head)->n;
	*head = temp->next;
	free(temp);
	return (data);
}
