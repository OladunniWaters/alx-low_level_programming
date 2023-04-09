#include "main.h"
/**
 * _power -calcualte (base and power)
 * @base: base of the exponent
 * @pow: power of the exponent
 * Return: value of the base and power
 */

unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int j;

	num = 1;
	for (i = 1; j <= pow; j++)
		num *= base;
	return (num);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of preted
 * return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int x, sum;
	char flag;

	flag = 0;
	x = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (x != 0)
	{
		sum = n & x;
		if (sum == x)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || x == 1)
		{
			_putchar('0);
		}
		x >>= 1;
	}
}
