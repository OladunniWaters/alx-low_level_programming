#include "main.h"

/**
 * set_bit - to set the value of a bit to 1 at a given index
 * @index: pointer where the bit to start from
 * @n: pointer number of x
 * Return: value
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x = 1 << index;
	*n = *n | x;

	return (1);
}
