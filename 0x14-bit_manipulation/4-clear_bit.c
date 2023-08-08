#include "main.h"

/**
 * clear_bit - clear
 * @n: pointer to number
 * @index: index
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int num;

	if (index > 64)
		return (-1);
	num = index;
	for (i = 1; num > 0; i *= 2, num--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
