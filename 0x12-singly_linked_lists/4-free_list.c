#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - adds a new node at the beginning of a list_t list.
 * @head: head node
  * Return: void
 */
void free_list(list_t *head)
{
	if (head->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
