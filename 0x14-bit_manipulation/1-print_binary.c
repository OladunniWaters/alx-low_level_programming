#include "main.h"
/**
 * _power - calculate (base and power)
 * @base: base of the exponet
 * @pow: power of the exponet
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= pow; i++)
		num *= base;
	return (num);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
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
			_putchar('0');
		}
		x >>= 1;
	}
}
