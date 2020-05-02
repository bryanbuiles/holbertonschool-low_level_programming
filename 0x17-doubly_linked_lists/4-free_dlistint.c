#include "lists.h"
/**
 * free_dlistint - Free double linked list
 * @head: head node
  * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
