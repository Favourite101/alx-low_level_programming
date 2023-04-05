#include "main.h"

/**
 * _pow_recursion - raises a number to a power
 * @x: number
 * @y: power
 *
 * Return: value
 */
int _pow_recursion(int x, int y)
{
	int power, i = 0;

	if (y < 0)
	{
		return (-1);
	}
	if ( y == 0 || y == 1)
	{
		return (1);
	}
	if (i <= y)
	{
		power = x * _pow_recursion(x, y);
		i++;
	}

	return (power);
}
