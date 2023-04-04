#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -delete the first element of the list
 * @head: navigate to the list
 * Return: Value
 **/

int pop_listint(listint_t **head)
{
	listint_t *my_var;
	int my_data;

	if (head == NULL)
		return (0);

	my_var = *head;
	*head = my_var->next;
	my_data = my_var->n;
	free(my_var);
	return (my_data);
}
