#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: contain the first list
 **/
void free_listint2(listint_t **head)
{
	listint_t *count;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		count = (*head)->next;
		free(*head);
		*head = count;
	}
}
