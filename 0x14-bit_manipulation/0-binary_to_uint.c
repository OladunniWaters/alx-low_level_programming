#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number, or 0
 **/

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int j;

	j = 0;
	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		j <<= 1;
		if (b[x] == '1')
			j += 1;
	}
	return (j);
}
