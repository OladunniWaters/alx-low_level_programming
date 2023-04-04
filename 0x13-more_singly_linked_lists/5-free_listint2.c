#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list.
 * @head: Address of the first node of a list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *my_var;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		my_var = (*head)->next;
		free(*head);
		*head = my_var;
	}
}
