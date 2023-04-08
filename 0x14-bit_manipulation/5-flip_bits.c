#include "main.h"
/**
 * flip_bits - flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bit flip
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long diff, total;
	unsigned int i, j;

	i = 0;
	total = 1;
	diff = n ^ m;
	for (j = 0; j < (sizeof(unsigned long int) * 8); j++)
	{
		if (total == (diff & total))
			i++;
		total <<= 1;
	}

	return (i);
}
