#include "main.h"

/**
 * clear_bit -sets the value of a bit to 0 at a given index.
 * @n: num of x
 * @index: starting from 0
 * Return: value
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x = ~(1 << index);
	*n = *n & x;

	return (1);
}
