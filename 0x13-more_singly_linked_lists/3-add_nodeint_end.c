#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of a list
 * @head: Address of the first node.
 * @n: Integer to insert a new node.
 * Return: Address of the new node.
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *my_var, *my_var2;

	my_var = malloc(sizeof(listint_t));
	if (my_var == NULL)
		return (NULL);

	my_var->n = n;
	my_var->next = NULL;

	if (*head == NULL)
	{
		*head = my_var;
		return (my_var);
	}

	my_var2 = *head;
	while (my_var->next != NULL)
		my_var2 = my_var2->next;
	my_var2->next = my_var;
	return (my_var);
}
