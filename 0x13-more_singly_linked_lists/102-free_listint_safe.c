#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - frees a linked list
 * @h: header
 * Return: values
 **/

size_t free_listint_safe(listint_t **h)
{
	size_t hei = 0;
	int diff;
	listint_t *my_var;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			my_var = (*h)->next;
			*h = my_var;
			hei++;
		}
		else
		{
			*h = NULL;
			hei++;
			break;
		}

	}

	*h = NULL;
	return (hei);
}
