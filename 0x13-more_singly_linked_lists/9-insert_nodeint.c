#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a new node at a given position.
 * @head: navigate to the new node
 * @idx: position of the new node
 * @n: data of the new node
 * Return: address of the new node
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, my_var;
	unsigned int y = 0;

	if (*head == NULL && idx != 0)
		return (NULL);

	if (idx != 0)
	{
		my_var = *head;
		for (; y < idx - 1 && my_var != NULL; y++)
			my_var = my_var->next;
		if (my_var == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = my_var->next;
	my_var->next = new_node;
	return (new_node);
}
