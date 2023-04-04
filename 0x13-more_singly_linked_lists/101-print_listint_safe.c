#include "lists.h"

/**
 * print_listint_safe -prints a list safely
 * @head: list of type
 * Return: values
**/

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("->[%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
