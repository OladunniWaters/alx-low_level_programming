#include "lists.h"

/**
 * listint_len - returns the number of eleminets in a single linked.
 * @h: direction to a list.
 * Return: Integer
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *my_var;
	unsigned int count = 0;

	my_var = h;
	while (my_var)
	{
		count++;
		my_var = my_var->next;
	}
	return (count);
}
