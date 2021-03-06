#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint- add all the values of a list_t list.
 * @head: entry point
 * Return: The add of nodes
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		i = i + head->n;
		head = head->next;
	}
	return (i);
}
