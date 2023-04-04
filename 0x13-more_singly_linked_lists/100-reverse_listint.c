#include "lists.h"

/**
 * reverse_listint -reverse a linked list
 * @head: navigate to the first address
 * Return: pointer to the first node in the new list
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		*head = next;
	}
	*head = prev;
	return (*head);
}
