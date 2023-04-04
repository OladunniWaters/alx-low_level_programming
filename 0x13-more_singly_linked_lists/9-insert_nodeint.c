#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Insert a new node at a given positiion.
 * @head: First node address.
 * @idx: Position of the new node to be inserted in.
 * @n: Data of the new node.
 * Return: Address of the new node.
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *count;
	unsigned int y = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	count = *head;
	for (; y < idx - 1 && count != NULL; y++)
		count = count->next;
	if (count == NULL)
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
	new_node->next = count->next;
	count->next = new_node;
	return (new_node);
}
