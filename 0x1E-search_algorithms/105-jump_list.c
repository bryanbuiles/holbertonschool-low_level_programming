#include "search_algos.h"
/**
  * jump_list - jump search in alinked list
  * @list: pointer to the first element of the array
  * @size: is the number of elements in array
  * @value: is the value to search for
  * Return: int (success)
  */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int i, j, inicia, jump, temp, temp3;
	listint_t *get, *temp2;

	j = size - 1, inicia = 0, get = list, jump = sqrt(size);
	if (list == NULL || size == 0)
		return (NULL);
	while (inicia <= j)
	{
		inicia += jump;
		i = 0;
		temp2 = get;
		while (i <= jump - 1)
		{
			if (get->next == NULL)
				break;
			get = get->next;
			i++;
		}
		if (inicia >= j)
			temp3 = j, printf("Value checked at index [%d] = [%d]\n", temp3, get->n);
		else
			printf("Value checked at index [%d] = [%d]\n", inicia, get->n);
		if (get->n >= value)
		{
			temp = inicia - jump;
			break;
		}
	}
	if (inicia >= j)
		temp = inicia - jump, inicia = j;
	printf("Value found between indexes [%d] and [%d]\n", temp, inicia);
	while (temp <= inicia)
	{
		printf("Value checked at index [%d] = [%d]\n", temp, temp2->n);
		if (temp2->n == value)
			return (temp2);
		temp2 = temp2->next;
		temp++;
	}
	return (NULL);
}
