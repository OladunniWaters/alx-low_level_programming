#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - fress listint_t linked list.
 * @head: pointer of the first list
 **/

void free_listint(listint_t *head)
{
	listint_t *my_var, *my_var2;

	my_var = head;

	while (my_var != NULL)
	{
		my_var2 = my_var->next;
		free(my_var);
		my_var = my_var2;
	}
}
