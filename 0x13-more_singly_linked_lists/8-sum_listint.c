#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum of all the data
 * @head: navigate to the list
 * Return: values
 **/

int sum_listint(listint_t *head)
{
	int all = 0;

	while (head != NULL)
	{
		all += head->n;
		head = head->next;
	}

	return (all);
}
