#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Add a new node at the beginning of the list
 * @head: Address of the first node of stingle link.
 * @n: Integer to insert into the new node.
 * Return: values
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *my_var;

	my_var = malloc(sizeof(listint_t));
	if (my_var == NULL)
		return (NULL);

	my_var->n = n;
	my_var->next = *head;
	*head = my_var;
	return (*head);
}
