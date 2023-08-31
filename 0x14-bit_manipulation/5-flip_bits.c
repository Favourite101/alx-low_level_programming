#include "main.h"

/**
 * flip_bits - flip bits
 * @n: first number
 * @m: second number
 * Return: bits number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	int i;

	num = n ^ m;
	i = 0;
	while (num)
	{
		i++;
		num &= (num - 1);
	}

	return (i);
}
