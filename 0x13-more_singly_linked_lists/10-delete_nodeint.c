#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at linked list.
 * @index: position of the node to delete
 * @head: first node address
 * Return: Integar
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int y;
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	for (y = 0; y < index - 1; y++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);

}
