#include "lists.h"
#include <stdio.h>

/**
 * print_listint -print elemets linked list
 * @h: head to the list
 * Return: values
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *my_var
		unsigned int count = 0;
	my_var = h;
	while (my_var)
	{
		printf("%d\n", my_var->n);
		count++;
		my_var = my_var->next
	}
	return (count)
}
