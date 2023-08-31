#include "main.h"

/**
 * set_bit - sets bit to 1
 * @n: number
 * @index: index
 *
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > 64)
		return (-1);
	for (num = 1; index > 0; index--, num *= 2)
		;
	*n += num;

	return (1);
}
