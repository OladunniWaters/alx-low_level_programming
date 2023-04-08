#include "main.h"

/**
 * get_bit - returns the value of the bit
 * @n: checks the bits
 * @index: bits to check
 * Return: value
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x, total;
	
	if (index > (sizeof(unsigned long int) * 8 -
				1))
		return (-1);
	x = 1 << index;
	total = n & x;
	if (total == x)
		return (1);
	
	return (0);
}
